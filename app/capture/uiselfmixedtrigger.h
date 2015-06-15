#ifndef UISELFMIXEDTRIGGER
#define UISELFMIXEDTRIGGER

#include <QWidget>
#include <QMouseEvent>
#include <QSlider>
#include <QLabel>

#include "device/selfmixedsignal.h"

class UiSelfmixedTrigger : public QWidget
{
    Q_OBJECT
public:
    explicit UiSelfmixedTrigger(QWidget *parent = 0);
    SelfmixedSignal::SelfmixedTriggerState state();
    void setState(SelfmixedSignal::SelfmixedTriggerState state);
    double level();
    void setLevel(double level);
    void setVPerDiv(double vPerDiv);

signals:
    void triggerChanged();
    void levelChanged();

public slots:

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void resizeEvent(QResizeEvent* event);

private slots:
    void setTriggerLevel(int level);

private:

    SelfmixedSignal::SelfmixedTriggerState mState;
    QSlider* mLevel;
    QLabel* mLevelLbl;
    double mVPerDiv;
    int mScale;

    void doLayout();

};

#endif // UISELFMIXEDTRIGGER

