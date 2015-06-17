/****************************************************************************
** Meta object code from reading C++ file 'uianalogtrigger.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uianalogtrigger.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uianalogtrigger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiAnalogTrigger[] = {

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
      17,   16,   16,   16, 0x05,
      34,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      55,   49,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiAnalogTrigger[] = {
    "UiAnalogTrigger\0\0triggerChanged()\0"
    "levelChanged()\0level\0setTriggerLevel(int)\0"
};

void UiAnalogTrigger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiAnalogTrigger *_t = static_cast<UiAnalogTrigger *>(_o);
        switch (_id) {
        case 0: _t->triggerChanged(); break;
        case 1: _t->levelChanged(); break;
        case 2: _t->setTriggerLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiAnalogTrigger::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiAnalogTrigger::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiAnalogTrigger,
      qt_meta_data_UiAnalogTrigger, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiAnalogTrigger::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiAnalogTrigger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiAnalogTrigger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiAnalogTrigger))
        return static_cast<void*>(const_cast< UiAnalogTrigger*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiAnalogTrigger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void UiAnalogTrigger::triggerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void UiAnalogTrigger::levelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
