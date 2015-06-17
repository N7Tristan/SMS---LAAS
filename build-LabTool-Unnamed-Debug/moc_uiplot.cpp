/****************************************************************************
** Meta object code from reading C++ file 'uiplot.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/capture/uiplot.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiPlot[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,    8,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,    7,    7,    7, 0x08,
      72,    7,    7,    7, 0x08,
      93,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiPlot[] = {
    "UiPlot\0\0,,\0cursorChanged(UiCursor::CursorId,bool,double)\0"
    "updateLayout()\0handleSignalsAdded()\0"
    "handleSignalsRemoved()\0"
};

void UiPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiPlot *_t = static_cast<UiPlot *>(_o);
        switch (_id) {
        case 0: _t->cursorChanged((*reinterpret_cast< UiCursor::CursorId(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->updateLayout(); break;
        case 2: _t->handleSignalsAdded(); break;
        case 3: _t->handleSignalsRemoved(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiPlot::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiPlot::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_UiPlot,
      qt_meta_data_UiPlot, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiPlot::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiPlot))
        return static_cast<void*>(const_cast< UiPlot*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int UiPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void UiPlot::cursorChanged(UiCursor::CursorId _t1, bool _t2, double _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
