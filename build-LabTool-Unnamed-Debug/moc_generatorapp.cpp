/****************************************************************************
** Meta object code from reading C++ file 'generatorapp.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/generator/generatorapp.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generatorapp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GeneratorApp[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   14,   13,   13, 0x08,
      58,   48,   13,   13, 0x08,
     127,  112,   13,   13, 0x08,
     164,   13,   13,   13, 0x08,
     172,   13,   13,   13, 0x08,
     184,   13,   13,   13, 0x08,
     196,  191,   13,   13, 0x08,
     210,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GeneratorApp[] = {
    "GeneratorApp\0\0enabled\0setGeneratorEnabled(bool)\0"
    "generator\0"
    "handleGeneratorClosed(UiGeneratorArea::GeneratorType)\0"
    "successful,msg\0handleGenerateFinished(bool,QString)\0"
    "start()\0startLoop()\0stop()\0loop\0"
    "doStart(bool)\0changeGenerateActions()\0"
};

void GeneratorApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GeneratorApp *_t = static_cast<GeneratorApp *>(_o);
        switch (_id) {
        case 0: _t->setGeneratorEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleGeneratorClosed((*reinterpret_cast< UiGeneratorArea::GeneratorType(*)>(_a[1]))); break;
        case 2: _t->handleGenerateFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->start(); break;
        case 4: _t->startLoop(); break;
        case 5: _t->stop(); break;
        case 6: _t->doStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->changeGenerateActions(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GeneratorApp::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GeneratorApp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GeneratorApp,
      qt_meta_data_GeneratorApp, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GeneratorApp::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GeneratorApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GeneratorApp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GeneratorApp))
        return static_cast<void*>(const_cast< GeneratorApp*>(this));
    return QObject::qt_metacast(_clname);
}

int GeneratorApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
