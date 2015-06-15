#ifndef UISELFMIXEDGROUP
#define UISELFMIXEDGROUP

#include <QGroupBox>
#include <QLabel>

#include "uiselfmixedsignal.h"

class UiSelfmixedGroup : public QGroupBox
{
    Q_OBJECT
public:
    explicit UiSelfmixedGroup(QWidget *parent = 0);
    void setNumSignals(int numSignals);

signals:

public slots:
    void setMeasurementData(QList<double>level, QList<double>pk, bool active);

protected:
    void showEvent(QShowEvent* event);

    QSize minimumSizeHint() const;
    QSize sizeHint() const;


private:

    enum PrivConstants {
        MarginTop = 5,
        MarginRight = 5,
        MarginBottom = 10,
        MarginLeft = 5,
        VertDistBetweenRelated = 0,
        VertDistBetweenUnrelated = 7,
        HoriDistBetweenRelated = 5
    };


    enum MeasureIndexes {
        MeasureV0 = 0,
        MeasureV1,
        MeasureV0V1,
        Measure0PkPk,
        Measure1PkPk,
        NumMeasurements // Must be last
    };

    QLabel mMeasureLbl[NumMeasurements];
    QLabel mMeasure[NumMeasurements];

    QLabel* mMeasureLevelLbl[UiSelfmixedSignal::MaxNumSignals];
    QLabel* mMeasureLevel[UiSelfmixedSignal::MaxNumSignals];

    QLabel* mMeasureLevelDiffLbl[UiSelfmixedSignal::MaxNumSignals/2];
    QLabel* mMeasureLevelDiff[UiSelfmixedSignal::MaxNumSignals/2];

    QLabel* mMeasurePkLbl[UiSelfmixedSignal::MaxNumSignals];
    QLabel* mMeasurePk[UiSelfmixedSignal::MaxNumSignals];

    QSize mMinSize;

    int mNumSignals;

    void setupLabels();
    void doLayout();

};


#endif // UISELFMIXEDGROUP

