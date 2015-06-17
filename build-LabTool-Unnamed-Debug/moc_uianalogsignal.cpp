/****************************************************************************
** Meta object code from reading C++ file 'uianalogsignal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uianalogsignal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uianalogsignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiAnalogSignal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      32,   16,   15,   15, 0x05,
      84,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      97,   15,   15,   15, 0x08,
     110,   15,   15,   15, 0x08,
     128,  126,   15,   15, 0x08,
     150,   15,   15,   15, 0x08,
     167,   15,   15,   15, 0x08,
     199,  195,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiAnalogSignal[] = {
    "UiAnalogSignal\0\0level,pk,active\0"
    "measurmentChanged(QList<double>,QList<double>,bool)\0"
    "triggerSet()\0nameEdited()\0disableSignal()\0"
    "v\0changeVPerDiv(double)\0changeTriggers()\0"
    "handleTriggerLevelChanged()\0btn\0"
    "handleCouplingChanged(QAbstractButton*)\0"
};

void UiAnalogSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiAnalogSignal *_t = static_cast<UiAnalogSignal *>(_o);
        switch (_id) {
        case 0: _t->measurmentChanged((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->triggerSet(); break;
        case 2: _t->nameEdited(); break;
        case 3: _t->disableSignal(); break;
        case 4: _t->changeVPerDiv((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->changeTriggers(); break;
        case 6: _t->handleTriggerLevelChanged(); break;
        case 7: _t->handleCouplingChanged((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiAnalogSignal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiAnalogSignal::staticMetaObject = {
    { &UiAbstractSignal::staticMetaObject, qt_meta_stringdata_UiAnalogSignal,
      qt_meta_data_UiAnalogSignal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiAnalogSignal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiAnalogSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiAnalogSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiAnalogSignal))
        return static_cast<void*>(const_cast< UiAnalogSignal*>(this));
    return UiAbstractSignal::qt_metacast(_clname);
}

int UiAnalogSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UiAbstractSignal::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UiAnalogSignal::measurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UiAnalogSignal::triggerSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
