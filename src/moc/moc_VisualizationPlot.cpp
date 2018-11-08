/****************************************************************************
** Meta object code from reading C++ file 'VisualizationPlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/VisualizationPlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualizationPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualizationPlot_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualizationPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualizationPlot_t qt_meta_stringdata_VisualizationPlot = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VisualizationPlot"
QT_MOC_LITERAL(1, 18, 13), // "pointSelected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "enableXBottomAutoScale"
QT_MOC_LITERAL(4, 56, 9), // "showCurve"
QT_MOC_LITERAL(5, 66, 12), // "QwtPlotItem*"
QT_MOC_LITERAL(6, 79, 4), // "item"
QT_MOC_LITERAL(7, 84, 2), // "on"
QT_MOC_LITERAL(8, 87, 4), // "info"
QT_MOC_LITERAL(9, 92, 5), // "index"
QT_MOC_LITERAL(10, 98, 16) // "removeLastMarker"

    },
    "VisualizationPlot\0pointSelected\0\0"
    "enableXBottomAutoScale\0showCurve\0"
    "QwtPlotItem*\0item\0on\0info\0index\0"
    "removeLastMarker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualizationPlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       3,    0,   47,    2, 0x0a /* Public */,
       4,    2,   48,    2, 0x0a /* Public */,
       4,    3,   53,    2, 0x0a /* Public */,
       4,    2,   60,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool, QMetaType::Int,    8,    7,    9,
    QMetaType::Void, QMetaType::QVariant, QMetaType::Int,    8,    9,
    QMetaType::Void,

       0        // eod
};

void VisualizationPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VisualizationPlot *_t = static_cast<VisualizationPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointSelected((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->enableXBottomAutoScale(); break;
        case 2: _t->showCurve((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->showCurve((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->showCurve((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->removeLastMarker(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject VisualizationPlot::staticMetaObject = {
    { &MdPlot::staticMetaObject, qt_meta_stringdata_VisualizationPlot.data,
      qt_meta_data_VisualizationPlot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VisualizationPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualizationPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualizationPlot.stringdata0))
        return static_cast<void*>(this);
    return MdPlot::qt_metacast(_clname);
}

int VisualizationPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MdPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
