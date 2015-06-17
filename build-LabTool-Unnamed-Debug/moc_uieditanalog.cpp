/****************************************************************************
** Meta object code from reading C++ file 'uieditanalog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/uieditanalog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uieditanalog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiEditAnalog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      33,   13,   13,   13, 0x08,
      58,   46,   13,   13, 0x08,
      80,   78,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiEditAnalog[] = {
    "UiEditAnalog\0\0handleNameEdited()\0"
    "updateRate()\0selectedIdx\0changeWaveform(int)\0"
    "v\0amplitudeChanged(double)\0"
};

void UiEditAnalog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiEditAnalog *_t = static_cast<UiEditAnalog *>(_o);
        switch (_id) {
        case 0: _t->handleNameEdited(); break;
        case 1: _t->updateRate(); break;
        case 2: _t->changeWaveform((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->amplitudeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiEditAnalog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiEditAnalog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiEditAnalog,
      qt_meta_data_UiEditAnalog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiEditAnalog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiEditAnalog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiEditAnalog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiEditAnalog))
        return static_cast<void*>(const_cast< UiEditAnalog*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiEditAnalog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
