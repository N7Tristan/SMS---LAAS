/****************************************************************************
** Meta object code from reading C++ file 'uicursorgroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uicursorgroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uicursorgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UiCursorGroup_t {
    QByteArrayData data[7];
    char stringdata[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UiCursorGroup_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UiCursorGroup_t qt_meta_stringdata_UiCursorGroup = {
    {
QT_MOC_LITERAL(0, 0, 13), // "UiCursorGroup"
QT_MOC_LITERAL(1, 14, 13), // "setCursorData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "UiCursor::CursorId"
QT_MOC_LITERAL(4, 48, 6), // "cursor"
QT_MOC_LITERAL(5, 55, 7), // "enabled"
QT_MOC_LITERAL(6, 63, 4) // "time"

    },
    "UiCursorGroup\0setCursorData\0\0"
    "UiCursor::CursorId\0cursor\0enabled\0"
    "time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UiCursorGroup[] = {

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
       1,    3,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::Double,    4,    5,    6,

       0        // eod
};

void UiCursorGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UiCursorGroup *_t = static_cast<UiCursorGroup *>(_o);
        switch (_id) {
        case 0: _t->setCursorData((*reinterpret_cast< UiCursor::CursorId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject UiCursorGroup::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_UiCursorGroup.data,
      qt_meta_data_UiCursorGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UiCursorGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UiCursorGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UiCursorGroup.stringdata))
        return static_cast<void*>(const_cast< UiCursorGroup*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int UiCursorGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
