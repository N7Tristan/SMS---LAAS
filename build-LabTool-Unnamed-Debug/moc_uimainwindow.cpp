/****************************************************************************
** Meta object code from reading C++ file 'uimainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/uimainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uimainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiMainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x08,
      42,   13,   13,   13, 0x08,
      64,   57,   13,   13, 0x08,
      92,   13,   13,   13, 0x08,
     112,   13,   13,   13, 0x08,
     125,   13,   13,   13, 0x08,
     139,   13,   13,   13, 0x08,
     153,   13,   13,   13, 0x08,
     169,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UiMainWindow[] = {
    "UiMainWindow\0\0index\0handleTabChanged(int)\0"
    "changeDevice()\0device\0changeDeviceStatus(Device*)\0"
    "changeColorScheme()\0newProject()\0"
    "openProject()\0saveProject()\0saveProjectAs()\0"
    "about()\0"
};

void UiMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UiMainWindow *_t = static_cast<UiMainWindow *>(_o);
        switch (_id) {
        case 0: _t->handleTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->changeDevice(); break;
        case 2: _t->changeDeviceStatus((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        case 3: _t->changeColorScheme(); break;
        case 4: _t->newProject(); break;
        case 5: _t->openProject(); break;
        case 6: _t->saveProject(); break;
        case 7: _t->saveProjectAs(); break;
        case 8: _t->about(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData UiMainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UiMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_UiMainWindow,
      qt_meta_data_UiMainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiMainWindow))
        return static_cast<void*>(const_cast< UiMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int UiMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
