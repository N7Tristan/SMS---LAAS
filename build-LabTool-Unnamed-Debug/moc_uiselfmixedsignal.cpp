/****************************************************************************
** Meta object code from reading C++ file 'uiselfmixedsignal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uiselfmixedsignal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiselfmixedsignal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiSelfmixedSignal[] = {

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
      35,   19,   18,   18, 0x05,
      87,   18,   18,   18, 0x05,

 // slots: signature, parameters, type, tag, flags
     100,   18,   18,   18, 0x08,
     113,   18,   18,   18, 0x08,
     131,  129,   18,   18, 0x08,
     153,   18,   18,   18, 0x08,
     170,   18,   18,   18, 0x08,
     202,  198,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiSelfmixedSignal[] = {
    "UiSelfmixedSignal\0\0level,pk,active\0"
    "measurmentChanged(QList<double>,QList<double>,bool)\0"
    "triggerSet()\0nameEdited()\0disableSignal()\0"
    "v\0changeVPerDiv(double)\0changeTriggers()\0"
    "handleTriggerLevelChanged()\0btn\0"
    "handleCouplingChanged(QAbstractButton*)\0"
};

void UiSelfmixedSignal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiSelfmixedSignal *_t = static_cast<UiSelfmixedSignal *>(_o);
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

const QMetaObjectExtraData UiSelfmixedSignal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiSelfmixedSignal::staticMetaObject = {
    { &UiAbstractSignal::staticMetaObject, qt_meta_stringdata_UiSelfmixedSignal,
      qt_meta_data_UiSelfmixedSignal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiSelfmixedSignal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiSelfmixedSignal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiSelfmixedSignal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiSelfmixedSignal))
        return static_cast<void*>(const_cast< UiSelfmixedSignal*>(this));
    return UiAbstractSignal::qt_metacast(_clname);
}

int UiSelfmixedSignal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UiSelfmixedSignal::measurmentChanged(QList<double> _t1, QList<double> _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UiSelfmixedSignal::triggerSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
