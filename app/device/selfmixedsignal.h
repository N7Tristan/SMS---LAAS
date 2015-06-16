/*
 *  Copyright 2013 Embedded Artists AB
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
#ifndef SelfmixedSIGNAL_H
#define SelfmixedSIGNAL_H

#include <QString>
#include <QMetaType>

#include "reconfigurelistener.h"

class SelfmixedSignal
{
public:

    enum Constants {
        InvalidSelfmixedId = -1
    };

    enum SelfmixedUsage {
        SelfmixedUsageCapture,
        SelfmixedUsageGenerate
    };

    enum SelfmixedTriggerState {
        SelfmixedTriggerNone,
        SelfmixedTriggerHighLow,
        SelfmixedTriggerLowHigh,
        SelfmixedTriggerNum // must be last
    };

    enum SelfmixedCoupling {
        CouplingDc,
        CouplingAc,
        CouplingNum // must be last
    };

    enum SelfmixedWaveform {
        WaveformSine,
        WaveformSquare,
        WaveformTriangle,
        WaveformNum // must be last
    };

    explicit SelfmixedSignal();
    explicit SelfmixedSignal(SelfmixedUsage usage, int id = 0);
    bool operator==(const SelfmixedSignal &other);
    bool operator!=(const SelfmixedSignal &other) {return !(*this == other);}
    SelfmixedSignal& operator=(const SelfmixedSignal &other);

    int id() const {return mId;}
    void setId(int id) {mId = id;}

    QString name() const {return mName;}
    void setName(QString name) {mName = name;}


    SelfmixedTriggerState triggerState() const {return mTriggerState;}
    void setTriggerState(SelfmixedTriggerState state);

    SelfmixedCoupling coupling() const {return mCoupling;}
    void setCoupling(SelfmixedCoupling c);

    double vPerDiv() const {return mVPerDiv;}
    void setVPerDiv(double v);

    double triggerLevel() const {return mTriggerLevel;}
    void setTriggerLevel(double l);


    SelfmixedWaveform waveform() const {return mWaveform;}
    void setWaveform(SelfmixedWaveform waveform) {mWaveform = waveform;}

    int frequency() const {return mFrequency;}
    void setFrequency (int freq) {mFrequency = freq;}

    double amplitude() const {return mAmplitude;}
    void setAmplitude(double amp) {mAmplitude = amp;}

    QString toSettingsString();
    static SelfmixedSignal fromSettingsString(QString& settings);

    void setReconfigureListener(ReconfigureListener* listener);


private:
    SelfmixedUsage mUsage;
    //ReconfigureListener* mReconfigureListener;

    // ##### Common properties ########

    int mId;
    QString mName;

    // ##### Capture properties #######

    SelfmixedTriggerState mTriggerState;
    SelfmixedCoupling mCoupling;
    double mVPerDiv;
    double mTriggerLevel;

    // ##### Generator properties #####

    SelfmixedWaveform mWaveform;
    int mFrequency;
    double mAmplitude;


};

Q_DECLARE_METATYPE(SelfmixedSignal)
Q_DECLARE_METATYPE(SelfmixedSignal*)

bool SelfmixedSignalLessThan(const SelfmixedSignal* s1, const SelfmixedSignal* s2);

#endif // SelfmixedSIGNAL_H
