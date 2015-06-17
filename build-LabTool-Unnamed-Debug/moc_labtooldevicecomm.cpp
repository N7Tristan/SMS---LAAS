/****************************************************************************
** Meta object code from reading C++ file 'labtooldevicecomm.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/device/labtool/labtooldevicecomm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtooldevicecomm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabToolDeviceComm[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   19,   18,   18, 0x05,
      52,   18,   18,   18, 0x05,
      69,   18,   18,   18, 0x05,
     191,   96,   18,   18, 0x05,
     276,  272,   18,   18, 0x05,
     303,  272,   18,   18, 0x05,
     343,   18,   18,   18, 0x05,
     362,   18,   18,   18, 0x05,
     391,  272,   18,   18, 0x05,
     433,   18,   18,   18, 0x05,
     452,  272,   18,   18, 0x05,
     484,  272,   18,   18, 0x05,
     520,  515,   18,   18, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_LabToolDeviceComm[] = {
    "LabToolDeviceComm\0\0connected\0"
    "connectionStatus(bool)\0captureStopped()\0"
    "captureConfigurationDone()\0"
    "transfer,size,trigger,digitalTrigSample,analogTrigSample,activeDigital"
    ",activeAnalog,signalTrim\0"
    "captureReceivedSamples(LabToolDeviceTransfer*,uint,uint,uint,uint,uint"
    ",uint,int)\0"
    "msg\0captureFailed(const char*)\0"
    "captureConfigurationFailed(const char*)\0"
    "generatorStopped()\0generatorConfigurationDone()\0"
    "generatorConfigurationFailed(const char*)\0"
    "generatorRunning()\0generatorRunFailed(const char*)\0"
    "calibrationFailed(const char*)\0data\0"
    "calibrationSuccess(LabToolCalibrationData*)\0"
};

void LabToolDeviceComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabToolDeviceComm *_t = static_cast<LabToolDeviceComm *>(_o);
        switch (_id) {
        case 0: _t->connectionStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->captureStopped(); break;
        case 2: _t->captureConfigurationDone(); break;
        case 3: _t->captureReceivedSamples((*reinterpret_cast< LabToolDeviceTransfer*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 4: _t->captureFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 5: _t->captureConfigurationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 6: _t->generatorStopped(); break;
        case 7: _t->generatorConfigurationDone(); break;
        case 8: _t->generatorConfigurationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 9: _t->generatorRunning(); break;
        case 10: _t->generatorRunFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 11: _t->calibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 12: _t->calibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LabToolDeviceComm::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabToolDeviceComm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LabToolDeviceComm,
      qt_meta_data_LabToolDeviceComm, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabToolDeviceComm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabToolDeviceComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabToolDeviceComm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolDeviceComm))
        return static_cast<void*>(const_cast< LabToolDeviceComm*>(this));
    return QObject::qt_metacast(_clname);
}

int LabToolDeviceComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LabToolDeviceComm::connectionStatus(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LabToolDeviceComm::captureStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void LabToolDeviceComm::captureConfigurationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void LabToolDeviceComm::captureReceivedSamples(LabToolDeviceTransfer * _t1, unsigned int _t2, unsigned int _t3, unsigned int _t4, unsigned int _t5, unsigned int _t6, unsigned int _t7, int _t8)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LabToolDeviceComm::captureFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LabToolDeviceComm::captureConfigurationFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LabToolDeviceComm::generatorStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void LabToolDeviceComm::generatorConfigurationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void LabToolDeviceComm::generatorConfigurationFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LabToolDeviceComm::generatorRunning()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void LabToolDeviceComm::generatorRunFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LabToolDeviceComm::calibrationFailed(const char * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LabToolDeviceComm::calibrationSuccess(LabToolCalibrationData * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
