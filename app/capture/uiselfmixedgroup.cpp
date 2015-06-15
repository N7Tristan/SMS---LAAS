#include "uiselfmixedgroup.h"

/*!
    \class UiSelfmixedGroup
    \brief UI widget that show Selfmixed signal measurements.

    \ingroup Capture

*/


/*!
    Constructs an UiSelfmixedGroup with the given \a parent.
*/
UiSelfmixedGroup::UiSelfmixedGroup(QWidget *parent) :
    QGroupBox(parent),
    mMinSize(0, 0)
{
    setTitle("Selfmixed Measurements");

    mNumSignals = 0;
    setupLabels();
}

/*!
    Sets the number of Selfmixed signals that are used by the application.
*/
void UiSelfmixedGroup::setNumSignals(int numSignals)
{
    if (numSignals > UiSelfmixedSignal::MaxNumSignals) return;

    mNumSignals = numSignals;

    // enable/disable labels
    for (int i = 0; i < UiSelfmixedSignal::MaxNumSignals; i++) {
        mMeasureLevelLbl[i]->setVisible((i<mNumSignals));
        mMeasureLevel[i]->setVisible((i<mNumSignals));
        mMeasurePkLbl[i]->setVisible((i<mNumSignals));
        mMeasurePk[i]->setVisible((i<mNumSignals));

        if ((i % 2) == 1) {
            mMeasureLevelDiffLbl[i/2]->setVisible((i<mNumSignals));
            mMeasureLevelDiff[i/2]->setVisible((i<mNumSignals));
        }

    }

    doLayout();
}

/*!
    Sets the latest measurement data. The parameter \a level contains the
    Selfmixed voltage level for each signal at current mouse cursor. The parameter
    \a pk contains peak-to-peak values for each signal. The parameter \a active
    indicates if the measurement is active or not.
*/
void UiSelfmixedGroup::setMeasurementData(QList<double>level, QList<double>pk,
                                       bool active)
{
    (void)active;
    for (int i = 0; i < mNumSignals; i++) {
        if (i < level.size()) {

            mMeasureLevel[i]->setText(QString("%1 V").arg(level.at(i)));
            if ((i % 2) == 1) {
                double diff = level.at(i-1)-level.at(i);
                if (diff < 0) diff = -diff;
                mMeasureLevelDiff[i/2]->setText(QString("%1 V").arg(diff));
            }

        }
        else {
            mMeasureLevel[i]->setText("");
            if ((i % 2) == 1) {
                mMeasureLevelDiff[i/2]->setText("");
            }
        }
    }

    for (int i = 0; i < mNumSignals; i++) {
        if (i < pk.size()) {
            mMeasurePk[i]->setText(QString("%1 V").arg(pk.at(i)));
        }
        else {
            mMeasurePk[i]->setText("");

        }
    }

    doLayout();
}

/*!
    This event handler is called when the widget is first made visible.
*/
void UiSelfmixedGroup::showEvent(QShowEvent* event)
{
    (void)event;
    doLayout();
}

/*!
    Returns the minimum size of this widget.
*/
QSize UiSelfmixedGroup::minimumSizeHint() const
{
    return mMinSize;
}

/*!
    Returns the recommended size of this widget.
*/
QSize UiSelfmixedGroup::sizeHint() const
{
    return minimumSizeHint();
}

/*!
    Create needed labels.
*/
void UiSelfmixedGroup::setupLabels()
{
    for (int i = 0; i < UiSelfmixedSignal::MaxNumSignals; i++) {
        // Level

        // Deallocation: "Qt Object trees" (See UiMainWindow)
        mMeasureLevelLbl[i] = new QLabel(this);
        mMeasureLevelLbl[i]->setText(QString("A%1:").arg(i));
        mMeasureLevelLbl[i]->setVisible(false);
        // Deallocation: "Qt Object trees" (See UiMainWindow)
        mMeasureLevel[i] = new QLabel(this);
        mMeasureLevel[i]->setVisible(false);

        // Peak-to-Peak

        // Deallocation: "Qt Object trees" (See UiMainWindow)
        mMeasurePkLbl[i] = new QLabel(this);
        mMeasurePkLbl[i]->setText(QString("Pk-Pk%1:").arg(i));
        mMeasurePkLbl[i]->setVisible(false);
        // Deallocation: "Qt Object trees" (See UiMainWindow)
        mMeasurePk[i] = new QLabel(this);
        mMeasurePk[i]->setVisible(false);

        // Level Diff (only every other idx; 1, 3, ...)
        if ((i % 2) == 1) {

            // Deallocation: "Qt Object trees" (See UiMainWindow)
            mMeasureLevelDiffLbl[i/2] = new QLabel(this);
            mMeasureLevelDiffLbl[i/2]
                    ->setText(QString("|A%1-A%2|:").arg(i-1).arg(i));
            mMeasureLevelDiffLbl[i/2]->setVisible(false);
            // Deallocation: "Qt Object trees" (See UiMainWindow)
            mMeasureLevelDiff[i/2] = new QLabel(this);
            mMeasureLevelDiff[i/2]->setVisible(false);

        }

    }

}

/*!
    Position all child widgets.
*/
void UiSelfmixedGroup::doLayout()
{

    int maxLblWidth = 0;
    int minWidth = 0;
    QMargins boxMargins = contentsMargins();


    //
    //    make sure all labels are resized to their minimum size
    //

    for (int i = 0; i < mNumSignals; i++) {

        mMeasureLevelLbl[i]->resize(mMeasureLevelLbl[i]->minimumSizeHint());
        mMeasureLevel[i]->resize(mMeasureLevel[i]->minimumSizeHint());

        if (mMeasureLevelLbl[i]->minimumSizeHint().width() > maxLblWidth) {
            maxLblWidth = mMeasureLevelLbl[i]->minimumSizeHint().width();
        }

        mMeasurePkLbl[i]->resize(mMeasurePkLbl[i]->minimumSizeHint());
        mMeasurePk[i]->resize(mMeasurePk[i]->minimumSizeHint());

        if (mMeasurePkLbl[i]->minimumSizeHint().width() > maxLblWidth) {
            maxLblWidth = mMeasurePkLbl[i]->minimumSizeHint().width();
        }

        if ((i % 2) == 1) {

            mMeasureLevelDiffLbl[i/2]->resize(mMeasureLevelDiffLbl[i/2]
                                              ->minimumSizeHint());
            mMeasureLevelDiff[i/2]->resize(mMeasureLevelDiff[i/2]
                                           ->minimumSizeHint());

            if (mMeasureLevelDiffLbl[i/2]->minimumSizeHint().width()
                    > maxLblWidth) {
                maxLblWidth = mMeasureLevelDiffLbl[i/2]->minimumSizeHint()
                        .width();
            }

        }

    }


    //
    //    position the labels
    //

    int yPos = MarginTop + boxMargins.top();
    int xPos = MarginLeft + boxMargins.left();
    int xPosRight = xPos + maxLblWidth + HoriDistBetweenRelated;

    for (int i = 0; i < mNumSignals; i++) {

        mMeasureLevelLbl[i]->move(xPos, yPos);
        mMeasureLevel[i]->move(xPosRight, yPos);

        yPos += mMeasureLevel[i]->height()+VertDistBetweenRelated;

        if (mMeasureLevel[i]->x()+mMeasureLevel[i]->width() > minWidth) {
            minWidth = mMeasureLevel[i]->x()+mMeasureLevel[i]->width();
        }
    }

    if (mNumSignals/2 > 0) {
        yPos += VertDistBetweenUnrelated;

        for (int i = 0; i < mNumSignals/2; i++) {

            mMeasureLevelDiffLbl[i]->move(xPos, yPos);
            mMeasureLevelDiff[i]->move(xPosRight, yPos);

            yPos += mMeasureLevelDiff[i]->height()+VertDistBetweenRelated;

            if (mMeasureLevelDiff[i]->x()+mMeasureLevelDiff[i]->width()
                    > minWidth) {
                minWidth = mMeasureLevelDiff[i]->x()+mMeasureLevelDiff[i]
                        ->width();
            }
        }
    }


    yPos += VertDistBetweenUnrelated;

    for (int i = 0; i < mNumSignals; i++) {

        mMeasurePkLbl[i]->move(xPos, yPos);
        mMeasurePk[i]->move(xPosRight, yPos);

        yPos += mMeasurePk[i]->height()+VertDistBetweenRelated;

        if (mMeasurePk[i]->x()+mMeasurePk[i]->width() > minWidth) {
            minWidth = mMeasurePk[i]->x()+mMeasurePk[i]->width();
        }
    }


}

