/****************************************************************************
** Meta object code from reading C++ file 'uidigitalgenerator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/uidigitalgenerator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uidigitalgenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiDigitalGenerator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x0a,
      45,   19,   19,   19, 0x0a,
      67,   19,   19,   19, 0x08,
      79,   19,   19,   19, 0x08,
     123,  103,   19,   19, 0x08,
     177,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiDigitalGenerator[] = {
    "UiDigitalGenerator\0\0states\0setNumStates(int)\0"
    "handleDeviceChanged()\0addSignal()\0"
    "removeSelectedSignals()\0selected,deselected\0"
    "handleSelectionChanged(QItemSelection,QItemSelection)\0"
    "updateRate()\0"
};

void UiDigitalGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiDigitalGenerator *_t = static_cast<UiDigitalGenerator *>(_o);
        switch (_id) {
        case 0: _t->setNumStates((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->handleDeviceChanged(); break;
        case 2: _t->addSignal(); break;
        case 3: _t->removeSelectedSignals(); break;
        case 4: _t->handleSelectionChanged((*reinterpret_cast< QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelection(*)>(_a[2]))); break;
        case 5: _t->updateRate(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiDigitalGenerator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiDigitalGenerator::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UiDigitalGenerator,
      qt_meta_data_UiDigitalGenerator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiDigitalGenerator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiDigitalGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiDigitalGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiDigitalGenerator))
        return static_cast<void*>(const_cast< UiDigitalGenerator*>(this));
    return QWidget::qt_metacast(_clname);
}

int UiDigitalGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
