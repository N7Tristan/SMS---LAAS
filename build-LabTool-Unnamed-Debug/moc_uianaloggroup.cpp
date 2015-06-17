/****************************************************************************
** Meta object code from reading C++ file 'uianaloggroup.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uianaloggroup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uianaloggroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiAnalogGroup[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      31,   15,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UiAnalogGroup[] = {
    "UiAnalogGroup\0\0level,pk,active\0"
    "setMeasurementData(QList<double>,QList<double>,bool)\0"
};

void UiAnalogGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiAnalogGroup *_t = static_cast<UiAnalogGroup *>(_o);
        switch (_id) {
        case 0: _t->setMeasurementData((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiAnalogGroup::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiAnalogGroup::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_UiAnalogGroup,
      qt_meta_data_UiAnalogGroup, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiAnalogGroup::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiAnalogGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiAnalogGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiAnalogGroup))
        return static_cast<void*>(const_cast< UiAnalogGroup*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int UiAnalogGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
