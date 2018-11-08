/****************************************************************************
** Meta object code from reading C++ file 'multidisplayuimainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/multidisplayuimainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multidisplayuimainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultidisplayUIMainWindow_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultidisplayUIMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultidisplayUIMainWindow_t qt_meta_stringdata_MultidisplayUIMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 24), // "MultidisplayUIMainWindow"
QT_MOC_LITERAL(1, 25, 13), // "writeSettings"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "showStatusMessage"
QT_MOC_LITERAL(4, 58, 3), // "msg"
QT_MOC_LITERAL(5, 62, 24), // "showStatusBarSampleCount"
QT_MOC_LITERAL(6, 87, 12), // "enableReplay"
QT_MOC_LITERAL(7, 100, 13), // "disableReplay"
QT_MOC_LITERAL(8, 114, 26), // "newDfBoostTransferFunction"
QT_MOC_LITERAL(9, 141, 4), // "name"
QT_MOC_LITERAL(10, 146, 16), // "dfMapSelected100"
QT_MOC_LITERAL(11, 163, 1), // "b"
QT_MOC_LITERAL(12, 165, 16), // "dfMapSelected200"
QT_MOC_LITERAL(13, 182, 16), // "dfMapSelected250"
QT_MOC_LITERAL(14, 199, 16), // "dfMapSelected300"
QT_MOC_LITERAL(15, 216, 16) // "dfMapSelected400"

    },
    "MultidisplayUIMainWindow\0writeSettings\0"
    "\0showStatusMessage\0msg\0showStatusBarSampleCount\0"
    "enableReplay\0disableReplay\0"
    "newDfBoostTransferFunction\0name\0"
    "dfMapSelected100\0b\0dfMapSelected200\0"
    "dfMapSelected250\0dfMapSelected300\0"
    "dfMapSelected400"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultidisplayUIMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       6,    0,   76,    2, 0x0a /* Public */,
       7,    0,   77,    2, 0x0a /* Public */,
       8,    1,   78,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,
      14,    1,   90,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   11,

       0        // eod
};

void MultidisplayUIMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultidisplayUIMainWindow *_t = static_cast<MultidisplayUIMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->showStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->showStatusBarSampleCount((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->enableReplay(); break;
        case 4: _t->disableReplay(); break;
        case 5: _t->newDfBoostTransferFunction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->dfMapSelected100((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->dfMapSelected200((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->dfMapSelected250((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->dfMapSelected300((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->dfMapSelected400((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MultidisplayUIMainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultidisplayUIMainWindow::writeSettings)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MultidisplayUIMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MultidisplayUIMainWindow.data,
      qt_meta_data_MultidisplayUIMainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultidisplayUIMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultidisplayUIMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultidisplayUIMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MultidisplayUIMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MultidisplayUIMainWindow::writeSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
