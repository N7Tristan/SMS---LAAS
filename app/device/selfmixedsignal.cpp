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
#include "selfmixedsignal.h"

#include <QStringList>
#include <QDebug>

/*!
    Constructs an empty Selfmixed signal with default usage and ID.
*/
SelfmixedSignal::SelfmixedSignal()
{
   // SelfmixedSignal::SelfmixedSignal(SelfmixedUsageCapture, 0);
    mUsage     = SelfmixedUsageCapture;
    //mUsage     = SelfmixedUsageGenerate;
    //mReconfigureListener = NULL;
    mId        = 0;
    mName      = QString("SM %1").arg(0);

    mTriggerState = SelfmixedTriggerNone;
    mCoupling     = CouplingDc;
    mVPerDiv      = 2;
    mTriggerLevel = 0;

    mFrequency = 10000;
    mWaveform  = SelfmixedSignal::WaveformSine;
    mAmplitude = 3;
    qDebug("Finish init signal");
}

/*!
    Constructs a new SelfmixedSignal with ID set to \a id.
    The \a usage parameter indicates where this container class will be
    used; Capture or Generator. The reason to have the parameter is that
    the container class is common for both functionalities, but not all
    settings are valid in both cases.
*/
SelfmixedSignal::SelfmixedSignal(SelfmixedUsage usage, int id)
{
    mUsage     = usage;
    //mReconfigureListener = NULL;
    mId        = id;
    mName      = QString("Selfmixed %1").arg(id);

    mTriggerState = SelfmixedTriggerNone;
    mCoupling     = CouplingDc;
    mVPerDiv      = 2;
    mTriggerLevel = 0;

    mFrequency = 10000;
    mWaveform  = SelfmixedSignal::WaveformSine;
    mAmplitude = 3;
}

/*!
    Returns true if this Selfmixed signal and the given \a signal have the same
    contents; otherwise returns false.
*/
bool SelfmixedSignal::operator==(const SelfmixedSignal &other)
{
    return (mId == other.mId &&
            mName == other.mName &&
            mTriggerState == other.mTriggerState &&
            mCoupling == other.mCoupling &&
            mVPerDiv == other.mVPerDiv &&
            mTriggerLevel == other.mTriggerLevel &&
            mFrequency == other.mFrequency &&
            mWaveform == other.mWaveform &&
            mAmplitude == other.mAmplitude);

}


/*!
    Copies the content of \a other to this Selfmixed signal.
*/
SelfmixedSignal& SelfmixedSignal::operator=(const SelfmixedSignal &other)
{
    mId = other.mId;
    mName = other.mName;
    mTriggerState = other.mTriggerState;
    mCoupling = other.mCoupling;
    mVPerDiv = other.mVPerDiv;
    mTriggerLevel = other.mTriggerLevel;
    mFrequency = other.mFrequency;
    mWaveform = other.mWaveform;
    mAmplitude = other.mAmplitude;
    mUsage = other.mUsage;
    //mReconfigureListener = other.mReconfigureListener;

    return *this;
}


/*!
    \fn void SelfmixedSignal::setTriggerState(SelfmixedTriggerState state)

   Sets the trigger state for this signal to \a state.
*/
void SelfmixedSignal::setTriggerState(SelfmixedTriggerState state)
{
    if (state == mTriggerState) return;

    mTriggerState = state;

    /*if (mReconfigureListener != NULL) {
        mReconfigureListener->reconfigure();
    }*/
}


void SelfmixedSignal::setCoupling(SelfmixedCoupling c)
{
    if (c == mCoupling) return;

    mCoupling = c;

   /* if (mReconfigureListener != NULL) {
        mReconfigureListener->reconfigure();
    }*/
}


void SelfmixedSignal::setVPerDiv(double v)
{
    if (v == mVPerDiv) return;

    mVPerDiv = v;

   /* if (mReconfigureListener != NULL) {
        mReconfigureListener->reconfigure();
    }*/
}


void SelfmixedSignal::setTriggerLevel(double l)
{
    if (l == mTriggerLevel) return;

    mTriggerLevel = l;

   /* if (mReconfigureListener != NULL) {
        mReconfigureListener->reconfigure();
    }*/
}

QString SelfmixedSignal::toSettingsString()
{
    // -- common fields
    // type;usage;id;name;

    // -- capture fields
    // vPerDiv;triggerState;triggerLevel;coupling

    // -- generate fields
    // waveform;frequency;amplitude


    QString str;
    str.append("Selfmixed;");
    str.append(QString("%1;").arg(mUsage));
    str.append(QString("%1;").arg(mId));
    str.append(mName).append(";");

    if (mUsage == SelfmixedUsageCapture) {
        str.append(QString("%1;").arg(mVPerDiv));
        str.append(QString("%1;").arg(mTriggerState));
        str.append(QString("%1;").arg(mTriggerLevel));
        str.append(QString("%1").arg(mCoupling));
    }
    else {
        str.append(QString("%1;").arg(mWaveform));
        str.append(QString("%1;").arg(mFrequency));
        str.append(QString("%1").arg(mAmplitude));
    }


    return str;
}

/*!
    Create an Selfmixed signal from a string representation. The string must have
    been created by SelfmixedSignal::toSettingsString().

    If the parsing of the string fails an SelfmixedSignal with ID
    SelfmixedSignal::InvalidSelfmixedId will be returned

    \sa toSettingsString()
*/
SelfmixedSignal SelfmixedSignal::fromSettingsString(QString& s)
{
    qDebug("fromSettingsString");
    bool ok = false;
    SelfmixedSignal tmp;
    tmp.mId = SelfmixedSignal::InvalidSelfmixedId;

    do {
        // -- common fields
        // type;usage;id;name;

        // -- capture fields
        // vPerDiv;triggerState;triggerLevel;coupling

        // -- generate fields
        // waveform;frequency;amplitude

        QStringList list = s.split(';');
        if (list.size() < 7) break;

        // --- type
        if (list.at(0) != "Selfmixed") break;

        // --- usage
        int u = list.at(1).toInt(&ok);
        if (!ok) break;
        if (u < 0 || u > SelfmixedUsageGenerate) break;
        SelfmixedUsage usage = (SelfmixedUsage)u;

        // --- ID
        int id = list.at(2).toInt(&ok);
        if (!ok) break;

        // --- name
        QString name = list.at(3);
        if (name.isNull() || name.isEmpty()) break;


        if (usage == SelfmixedUsageCapture) {

            if (list.size() < 8) break;

            // --- voltperdiv
            double vperdiv = list.at(4).toDouble(&ok);
            if (!ok) break;
            if (vperdiv < 0 || vperdiv > 5) break;

            // --- trigger state
            int t = list.at(5).toInt(&ok);
            if (!ok) break;
            if (t < 0 || t >= SelfmixedSignal::SelfmixedTriggerNum) break;

            SelfmixedSignal::SelfmixedTriggerState trigger
                    = (SelfmixedSignal::SelfmixedTriggerState)t;

            // --- trigger level
            double level = list.at(6).toDouble(&ok);
            if (!ok) break;

            // --- AC/DC coupling
            int c = list.at(7).toInt(&ok);
            if (!ok) break;
            if (c < 0 || c >= SelfmixedSignal::CouplingNum) break;

            SelfmixedSignal::SelfmixedCoupling coupling
                    = (SelfmixedSignal::SelfmixedCoupling)c;


            tmp.mUsage = usage;
            tmp.mId = id;
            tmp.mName = name;
            tmp.mVPerDiv = vperdiv;
            tmp.mTriggerState = trigger;
            tmp.mTriggerLevel = level;
            tmp.mCoupling = coupling;

        }
        else {

            // --- waveform
            int w = list.at(4).toInt(&ok);
            if (!ok) break;
            if (w < 0 || w >= SelfmixedSignal::WaveformNum) break;
            SelfmixedSignal::SelfmixedWaveform waveform
                    = static_cast<SelfmixedSignal::SelfmixedWaveform>(w);

            // --- frequency
            int freq = list.at(5).toInt(&ok);
            if (!ok) break;

            // --- amplitude
            double amp = list.at(6).toDouble(&ok);
            if (!ok) break;

            tmp.mUsage = usage;
            tmp.mId = id;
            tmp.mName = name;
            tmp.mWaveform = waveform;
            tmp.mFrequency = freq;
            tmp.mAmplitude = amp;
        }



    } while (false);

    return tmp;
}

/*!
    Set the reconfigure listener to \a listener. The reconfigure listener will
    be called whenever a state is changed that might need a reconfiguration of
    the device.
*/
void SelfmixedSignal::setReconfigureListener(ReconfigureListener* listener)
{
    /*
        Normally signals and slots would be used instead of a listener.
        The SelfmixedSignal class, however, is used in a way where it must
        be copied (stored in QList for example). Classes which implement
        QObject cannot be copied and we would have had to implement QObject
        in order to use signals and slots.
    */
// Me semble inutile à l'instant présent
    //mReconfigureListener = listener;
}

bool SelfmixedSignalLessThan(const SelfmixedSignal* s1, const SelfmixedSignal* s2) {
    qDebug("SelfmixedSignalLessThan");
    return s1->id() < s2->id();
}

