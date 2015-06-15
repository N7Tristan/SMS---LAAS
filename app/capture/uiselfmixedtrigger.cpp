#include "uiselfmixedtrigger.h"

#include <QDebug>
#include <QPainter>
#include <QPen>

#define TRIGGER_STATE_WIDTH  (15)
#define TRIGGER_STATE_HEIGHT (15)
#define TRIGGER_TO_SLIDER_DIST (3)
#define SLIDER_MIN_HEIGHT (50)

#define TRIGGER_RANGE (50)
#define TRIGGER_STEPS_PER_VPD (10)

/*!
    \class UiSelfmixedTrigger
    \brief UI widget that is responsible for controlling trigger state
    and trigger level.

    \ingroup Capture

*/


/*!
    Constructs an UiSelfmixedTrigger with the given \a parent.
*/
UiSelfmixedTrigger::UiSelfmixedTrigger(QWidget *parent) :
    QWidget(parent)
{
    mScale = TRIGGER_STEPS_PER_VPD;
    mState = SelfmixedSignal::SelfmixedTriggerNone;
    // Deallocation: "Qt Object trees" (See UiMainWindow)
    mLevel = new QSlider(this);
    mLevel->setRange(-TRIGGER_RANGE, TRIGGER_RANGE);
    mLevel->setSingleStep(1);
    mLevel->resize(mLevel->minimumSizeHint().width(), SLIDER_MIN_HEIGHT);

    connect(mLevel, SIGNAL(valueChanged(int)),
            this, SLOT(setTriggerLevel(int)));

    // Deallocation: "Qt Object trees" (See UiMainWindow)
    mLevelLbl = new QLabel("0", this);

    setMinimumWidth(30);
    setMaximumWidth(30);
    setMinimumHeight(TRIGGER_STATE_HEIGHT + TRIGGER_TO_SLIDER_DIST
                     + SLIDER_MIN_HEIGHT);

    resize(25,
           TRIGGER_STATE_HEIGHT+TRIGGER_TO_SLIDER_DIST
           +mLevel->height()+3+mLevelLbl->height());
}

/*!
    Returns the trigger state.
*/
SelfmixedSignal::SelfmixedTriggerState UiSelfmixedTrigger::state()
{
    return mState;
}

/*!
    Sets the trigger state to \a state.
*/
void UiSelfmixedTrigger::setState(SelfmixedSignal::SelfmixedTriggerState state)
{
    mState = state;
    update();
}

/*!
    Returns the trigger level.
*/
double UiSelfmixedTrigger::level()
{
    int l = mLevel->value();

    return (double)l/mScale;
}

/*!
    Sets the trigger level to \a level.
*/
void UiSelfmixedTrigger::setLevel(double level)
{
    mLevel->setValue(qRound(level*mScale));
}

/*!
    Sets the volt per divider. The trigger range is rescaled based
    on the \a vPerDiv value.
*/
void UiSelfmixedTrigger::setVPerDiv(double vPerDiv)
{
    double l = level();
    mScale = TRIGGER_RANGE / (vPerDiv * 5); // 5 positive and 5 negative dividers
    mLevel->setValue(qRound(l*mScale));
}

/*!
    \fn void UiSelfmixedTrigger::triggerChanged()

    This signal is emitted when the trigger state is changed.
*/

/*!
    \fn void UiSelfmixedTrigger::levelChanged()

    This signal is emitted when the trigger level is changed.
*/


/*!
    Paint event handler responsible for painting this widget.
*/
void UiSelfmixedTrigger::paintEvent(QPaintEvent *event)
{
    (void)event;
    int mid = width() / 2;
    QPainter painter(this);
    int rectX = mid-TRIGGER_STATE_WIDTH/2;
    int m = 3;

//    painter.setBrush(QColor(255,255,255));
//    painter.drawRoundRect(rectX, 0, TRIGGER_STATE_WIDTH-1,
//                          TRIGGER_STATE_HEIGHT-1, 10, 10);

    painter.save();
    painter.translate(rectX, 0);
    painter.drawLine(1, 0, TRIGGER_STATE_WIDTH-2, 0);
    painter.drawLine(TRIGGER_STATE_WIDTH-1, 1, TRIGGER_STATE_WIDTH-1, TRIGGER_STATE_HEIGHT-2);
    painter.drawLine(1, TRIGGER_STATE_HEIGHT-1, TRIGGER_STATE_WIDTH-2, TRIGGER_STATE_HEIGHT-1);
    painter.drawLine(0, 1, 0, TRIGGER_STATE_HEIGHT-2);
    painter.fillRect(1, 1, TRIGGER_STATE_WIDTH-2, TRIGGER_STATE_HEIGHT-2, QColor(255,255,255));
    painter.restore();

    QPen pen = painter.pen();
    pen.setWidth(2);
    painter.setPen(pen);

    switch(mState) {
    case SelfmixedSignal::SelfmixedTriggerNone:
        // nothing to draw
        break;
    case SelfmixedSignal::SelfmixedTriggerHighLow:

        // top line
        painter.drawLine(rectX+m, m, mid, m);
        // transition
        painter.drawLine(mid, m, mid, TRIGGER_STATE_HEIGHT-m);
        // bottom line
        painter.drawLine(mid, TRIGGER_STATE_HEIGHT-m,
                         rectX + TRIGGER_STATE_WIDTH-m-1, TRIGGER_STATE_HEIGHT-m);

        break;
    case SelfmixedSignal::SelfmixedTriggerLowHigh:

        // bottom line
        painter.drawLine(rectX+m, TRIGGER_STATE_HEIGHT-m, mid,
                         TRIGGER_STATE_HEIGHT-m);
        // transition
        painter.drawLine(mid, m, mid, TRIGGER_STATE_HEIGHT-m);
        // top line
        painter.drawLine(mid, m, rectX + TRIGGER_STATE_WIDTH-m-1, m);

        break;

    default:
        break;
    }

}

/*!
    Mouse press event handler called when a mouse button is pressed.
*/
void UiSelfmixedTrigger::mousePressEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton) {
        int s = (int) mState;
        s++;
        if (s >= SelfmixedSignal::SelfmixedTriggerNum) s = 0;
        mState = (SelfmixedSignal::SelfmixedTriggerState)s;

        emit triggerChanged();


        update();
    }
}

/*!
    Resize event handler called when the widgets size has been changed.
*/
void UiSelfmixedTrigger::resizeEvent(QResizeEvent* event)
{
    (void)event;
    doLayout();
}

/*!
    Set the trigger level to \a level.
*/
void UiSelfmixedTrigger::setTriggerLevel(int level)
{
    double l = (double)level/mScale;
    mLevelLbl->setText(QString("%1").arg(l, 4, 'f', 2));
    mLevelLbl->hide();
    mLevelLbl->show();
    doLayout();

    emit levelChanged();
}

/*!
    Position child widgets.
*/
void UiSelfmixedTrigger::doLayout()
{
    int levelHeight = height()
            -TRIGGER_STATE_HEIGHT
            -TRIGGER_TO_SLIDER_DIST
            - 3 -mLevelLbl->minimumSizeHint().height();

    mLevel->move(width()/2-mLevel->width()/2,
                 TRIGGER_STATE_HEIGHT + TRIGGER_TO_SLIDER_DIST);

    mLevel->resize(mLevel->width(), levelHeight);

    mLevelLbl->move(width()/2-mLevelLbl->minimumSizeHint().width()/2,
                    mLevel->pos().y()+mLevel->height()+3);
}

