/****************************************************************************
** Meta object code from reading C++ file 'uidigitalgroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uidigitalgroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uidigitalgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiDigitalGroup_t {
    QByteArrayData data[8];
    char stringdata[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiDigitalGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiDigitalGroup_t qt_meta_stringdata_UiDigitalGroup = {
    {
QT_MOC_LITERAL(0, 0, 14), // "UiDigitalGroup"
QT_MOC_LITERAL(1, 15, 12), // "setCycleData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "start"
QT_MOC_LITERAL(4, 35, 3), // "mid"
QT_MOC_LITERAL(5, 39, 3), // "end"
QT_MOC_LITERAL(6, 43, 7), // "highLow"
QT_MOC_LITERAL(7, 51, 6) // "active"

    },
    "UiDigitalGroup\0setCycleData\0\0start\0"
    "mid\0end\0highLow\0active"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiDigitalGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Bool,    3,    4,    5,    6,    7,

       0        // eod
};

void UiDigitalGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiDigitalGroup *_t = static_cast<UiDigitalGroup *>(_o);
        switch (_id) {
        case 0: _t->setCycleData((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject UiDigitalGroup::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_UiDigitalGroup.data,
      qt_meta_data_UiDigitalGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiDigitalGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiDigitalGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiDigitalGroup.stringdata))
        return static_cast<void*>(const_cast< UiDigitalGroup*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int UiDigitalGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
