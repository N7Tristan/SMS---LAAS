/****************************************************************************
** Meta object code from reading C++ file 'labtoolcapturedevice.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/device/labtool/labtoolcapturedevice.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolcapturedevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabToolCaptureDevice[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x08,
      38,   21,   21,   21, 0x08,
      68,   64,   21,   21, 0x08,
     213,  108,   21,   21, 0x08,
     293,   64,   21,   21, 0x08,
     326,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LabToolCaptureDevice[] = {
    "LabToolCaptureDevice\0\0handleStopped()\0"
    "handleConfigurationDone()\0msg\0"
    "handleConfigurationFailure(const char*)\0"
    "transfer,size,trigger,digitalTrigSample,analogTrigSample,digitalChanne"
    "lInfo,analogChannelInfo,signalTrim\0"
    "handleReceivedSamples(LabToolDeviceTransfer*,uint,uint,uint,uint,uint,"
    "uint,int)\0"
    "handleFailedCapture(const char*)\0"
    "handleReconfigurationTimer()\0"
};

void LabToolCaptureDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabToolCaptureDevice *_t = static_cast<LabToolCaptureDevice *>(_o);
        switch (_id) {
        case 0: _t->handleStopped(); break;
        case 1: _t->handleConfigurationDone(); break;
        case 2: _t->handleConfigurationFailure((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 3: _t->handleReceivedSamples((*reinterpret_cast< LabToolDeviceTransfer*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5])),(*reinterpret_cast< uint(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8]))); break;
        case 4: _t->handleFailedCapture((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 5: _t->handleReconfigurationTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LabToolCaptureDevice::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabToolCaptureDevice::staticMetaObject = {
    { &CaptureDevice::staticMetaObject, qt_meta_stringdata_LabToolCaptureDevice,
      qt_meta_data_LabToolCaptureDevice, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabToolCaptureDevice::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabToolCaptureDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabToolCaptureDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolCaptureDevice))
        return static_cast<void*>(const_cast< LabToolCaptureDevice*>(this));
    return CaptureDevice::qt_metacast(_clname);
}

int LabToolCaptureDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CaptureDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
