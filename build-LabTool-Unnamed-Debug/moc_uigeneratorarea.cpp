/****************************************************************************
** Meta object code from reading C++ file 'uigeneratorarea.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/uigeneratorarea.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uigeneratorarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiGeneratorArea[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   16,   16,   16, 0x0a,
      97,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UiGeneratorArea[] = {
    "UiGeneratorArea\0\0generator\0"
    "generatorClosed(UiGeneratorArea::GeneratorType)\0"
    "handleDeviceChanged()\0tileSubWindows()\0"
};

void UiGeneratorArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiGeneratorArea *_t = static_cast<UiGeneratorArea *>(_o);
        switch (_id) {
        case 0: _t->generatorClosed((*reinterpret_cast< UiGeneratorArea::GeneratorType(*)>(_a[1]))); break;
        case 1: _t->handleDeviceChanged(); break;
        case 2: _t->tileSubWindows(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiGeneratorArea::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiGeneratorArea::staticMetaObject = {
    { &QMdiArea::staticMetaObject, qt_meta_stringdata_UiGeneratorArea,
      qt_meta_data_UiGeneratorArea, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiGeneratorArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiGeneratorArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiGeneratorArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiGeneratorArea))
        return static_cast<void*>(const_cast< UiGeneratorArea*>(this));
    return QMdiArea::qt_metacast(_clname);
}

int UiGeneratorArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiArea::qt_metacall(_c, _id, _a);
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
void UiGeneratorArea::generatorClosed(UiGeneratorArea::GeneratorType _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
