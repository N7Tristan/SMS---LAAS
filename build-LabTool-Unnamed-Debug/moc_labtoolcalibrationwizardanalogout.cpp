/****************************************************************************
** Meta object code from reading C++ file 'labtoolcalibrationwizardanalogout.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/device/labtool/labtoolcalibrationwizardanalogout.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'labtoolcalibrationwizardanalogout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LabToolCalibrationWizardAnalogOut[] = {

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
      35,   34,   34,   34, 0x08,
      58,   54,   34,   34, 0x08,
     100,   95,   34,   34, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_LabToolCalibrationWizardAnalogOut[] = {
    "LabToolCalibrationWizardAnalogOut\0\0"
    "nextValueClicked()\0msg\0"
    "handleCalibrationFailed(const char*)\0"
    "data\0handleCalibrationSuccess(LabToolCalibrationData*)\0"
};

void LabToolCalibrationWizardAnalogOut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LabToolCalibrationWizardAnalogOut *_t = static_cast<LabToolCalibrationWizardAnalogOut *>(_o);
        switch (_id) {
        case 0: _t->nextValueClicked(); break;
        case 1: _t->handleCalibrationFailed((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: _t->handleCalibrationSuccess((*reinterpret_cast< LabToolCalibrationData*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LabToolCalibrationWizardAnalogOut::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LabToolCalibrationWizardAnalogOut::staticMetaObject = {
    { &QWizardPage::staticMetaObject, qt_meta_stringdata_LabToolCalibrationWizardAnalogOut,
      qt_meta_data_LabToolCalibrationWizardAnalogOut, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LabToolCalibrationWizardAnalogOut::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LabToolCalibrationWizardAnalogOut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LabToolCalibrationWizardAnalogOut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LabToolCalibrationWizardAnalogOut))
        return static_cast<void*>(const_cast< LabToolCalibrationWizardAnalogOut*>(this));
    return QWizardPage::qt_metacast(_clname);
}

int LabToolCalibrationWizardAnalogOut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
