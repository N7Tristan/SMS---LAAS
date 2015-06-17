/****************************************************************************
** Meta object code from reading C++ file 'labtoolcalibrationwizard.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/device/labtool/labtoolcalibrationwizard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolcalibrationwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabToolCalibrationWizard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   26,   25,   25, 0x0a,
      68,   64,   25,   25, 0x08,
     110,  105,   25,   25, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LabToolCalibrationWizard[] = {
    "LabToolCalibrationWizard\0\0connected\0"
    "handleConnectedStatus(bool)\0msg\0"
    "handleCalibrationFailed(const char*)\0"
    "data\0handleCalibrationSuccess(LabToolCalibrationData*)\0"
};

void LabToolCalibrationWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabToolCalibrationWizard *_t = static_cast<LabToolCalibrationWizard *>(_o);
        switch (_id) {
        case 0: _t->handleConnectedStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleCalibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->handleCalibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LabToolCalibrationWizard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabToolCalibrationWizard::staticMetaObject = {
    { &QWizard::staticMetaObject, qt_meta_stringdata_LabToolCalibrationWizard,
      qt_meta_data_LabToolCalibrationWizard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabToolCalibrationWizard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabToolCalibrationWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabToolCalibrationWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolCalibrationWizard))
        return static_cast<void*>(const_cast< LabToolCalibrationWizard*>(this));
    return QWizard::qt_metacast(_clname);
}

int LabToolCalibrationWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
