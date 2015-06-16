#ifndef UISELFMIXEDSIGNAL
#define UISELFMIXEDSIGNAL

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QMouseEvent>
#include <QShowEvent>
#include <QPushButton>
#include <QImage>

#include "uiabstractsignal.h"

#include "device/selfmixedsignal.h"

class UiSelfmixedSignalPrivate;

class UiSelfmixedSignal : public UiAbstractSignal
{
    Q_OBJECT
public:

    enum Constants {
        MaxNumSignals = 4
    };

    explicit UiSelfmixedSignal(QWidget *parent = 0);
    ~UiSelfmixedSignal();

    void addSignal(SelfmixedSignal *signal);
    QList<SelfmixedSignal*> addedSignals();

    void clearTriggers();

signals:
    void measurmentChanged(QList<double>level, QList<double>pk, bool active);
    void triggerSet();

public slots:

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void showEvent(QShowEvent* event);
    void leaveEvent(QEvent* event);

private slots:
    void nameEdited();

    void disableSignal();
    void changeVPerDiv(double v);
    void changeTriggers();
    void handleTriggerLevelChanged();
    void handleCouplingChanged(QAbstractButton* btn);

private:

    enum PrivateConstants {
        NumDivs = 10,
        DistanceBetweenArea = 4,
        SignalIdMarginRight = 10
    };


    QList<UiSelfmixedSignalPrivate*> mSignals;

    int mNumSupportedSignals;

    bool mDragging;
    double mDragStart;
    UiSelfmixedSignalPrivate* mDragSignal;

    int mMouseOverXPos;
    bool mMouseOverValid;

    static const double MaxVPerDiv;
    static const double MinVPerDiv;
    int mNumPxPerDiv;

    void setName(QString &name, UiSelfmixedSignalPrivate *signal);
    int calcMinimumWidth();
    void updateMinimumWidth();

    UiSelfmixedSignalPrivate *findSignal(QPoint pxPoint);
    void findIntersect(UiSelfmixedSignalPrivate* signal, double time, QPointF* intersect);


    void paintDivLines(QPainter* painter);
    void paintSignalValue(QPainter* painter, double time);
    void paintSignals(QPainter* painter);
    void paintTriggerLevel(QPainter* painter);

    void infoWidthChanged();
    void doLayout();
    void disableSignal(int idx);


    friend class UiSelfmixedSignalPrivate;
};

#endif // UISELFMIXEDSIGNAL

