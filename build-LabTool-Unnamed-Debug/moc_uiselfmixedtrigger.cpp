/****************************************************************************
** Meta object code from reading C++ file 'uiselfmixedtrigger.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uiselfmixedtrigger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiselfmixedtrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiSelfmixedTrigger[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x05,
      37,   19,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   52,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiSelfmixedTrigger[] = {
    "UiSelfmixedTrigger\0\0triggerChanged()\0"
    "levelChanged()\0level\0setTriggerLevel(int)\0"
};

void UiSelfmixedTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiSelfmixedTrigger *_t = static_cast<UiSelfmixedTrigger *>(_o);
        switch (_id) {
        case 0: _t->triggerChanged(); break;
        case 1: _t->levelChanged(); break;
        case 2: _t->setTriggerLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiSelfmixedTrigger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiSelfmixedTrigger::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiSelfmixedTrigger,
      qt_meta_data_UiSelfmixedTrigger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiSelfmixedTrigger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiSelfmixedTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiSelfmixedTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiSelfmixedTrigger))
        return static_cast<void*>(const_cast< UiSelfmixedTrigger*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiSelfmixedTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void UiSelfmixedTrigger::triggerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UiSelfmixedTrigger::levelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
