/****************************************************************************
** Meta object code from reading C++ file 'signalmanager.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/signalmanager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SignalManager[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      30,   14,   14,   14, 0x05,
      77,   47,   14,   14, 0x05,
     150,  134,   14,   14, 0x05,
     208,  134,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     290,  269,   14,   14, 0x08,
     328,  326,   14,   14, 0x28,
     359,   14,   14,   14, 0x08,
     385,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SignalManager[] = {
    "SignalManager\0\0signalsAdded()\0"
    "signalsRemoved()\0start,mid,end,highLow,mActive\0"
    "digitalMeasurmentChanged(double,double,double,bool,bool)\0"
    "level,pk,active\0"
    "analogMeasurmentChanged(QList<double>,QList<double>,bool)\0"
    "selfmixedMeasurmentChanged(QList<double>,QList<double>,bool)\0"
    "s,removeDeviceSignal\0"
    "closeSignal(UiAbstractSignal*,bool)\0"
    "s\0closeSignal(UiAbstractSignal*)\0"
    "handleDigitalTriggerSet()\0"
    "handleAnalogTriggerSet()\0"
};

void SignalManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SignalManager *_t = static_cast<SignalManager *>(_o);
        switch (_id) {
        case 0: _t->signalsAdded(); break;
        case 1: _t->signalsRemoved(); break;
        case 2: _t->digitalMeasurmentChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->analogMeasurmentChanged((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->selfmixedMeasurmentChanged((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->closeSignal((*reinterpret_cast< UiAbstractSignal*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->closeSignal((*reinterpret_cast< UiAbstractSignal*(*)>(_a[1]))); break;
        case 7: _t->handleDigitalTriggerSet(); break;
        case 8: _t->handleAnalogTriggerSet(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SignalManager::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SignalManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SignalManager,
      qt_meta_data_SignalManager, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SignalManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SignalManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SignalManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SignalManager))
        return static_cast<void*>(const_cast< SignalManager*>(this));
    return QObject::qt_metacast(_clname);
}

int SignalManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SignalManager::signalsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SignalManager::signalsRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void SignalManager::digitalMeasurmentChanged(double _t1, double _t2, double _t3, bool _t4, bool _t5)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SignalManager::analogMeasurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SignalManager::selfmixedMeasurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
