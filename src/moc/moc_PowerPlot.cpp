/****************************************************************************
** Meta object code from reading C++ file 'PowerPlot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/PowerPlot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PowerPlot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PowerPlot_t {
    QByteArrayData data[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PowerPlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PowerPlot_t qt_meta_stringdata_PowerPlot = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PowerPlot"
QT_MOC_LITERAL(1, 10, 12), // "resultString"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "dinTemp"
QT_MOC_LITERAL(4, 32, 10), // "setDinTemp"
QT_MOC_LITERAL(5, 43, 1), // "t"
QT_MOC_LITERAL(6, 45, 17), // "setDinAirPressure"
QT_MOC_LITERAL(7, 63, 1), // "p"
QT_MOC_LITERAL(8, 65, 14), // "dinAirPressure"
QT_MOC_LITERAL(9, 80, 10), // "getCarMass"
QT_MOC_LITERAL(10, 91, 10), // "setCarMass"
QT_MOC_LITERAL(11, 102, 2), // "nm"
QT_MOC_LITERAL(12, 105, 15), // "getSmoothAmount"
QT_MOC_LITERAL(13, 121, 15), // "setSmoothAmount"
QT_MOC_LITERAL(14, 137, 1), // "s"
QT_MOC_LITERAL(15, 139, 17), // "getDriveTrainLoss"
QT_MOC_LITERAL(16, 157, 17), // "setDriveTrainLoss"
QT_MOC_LITERAL(17, 175, 1), // "l"
QT_MOC_LITERAL(18, 177, 11), // "reCalculate"
QT_MOC_LITERAL(19, 189, 11) // "useGpsSpeed"

    },
    "PowerPlot\0resultString\0\0dinTemp\0"
    "setDinTemp\0t\0setDinAirPressure\0p\0"
    "dinAirPressure\0getCarMass\0setCarMass\0"
    "nm\0getSmoothAmount\0setSmoothAmount\0s\0"
    "getDriveTrainLoss\0setDriveTrainLoss\0"
    "l\0reCalculate\0useGpsSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PowerPlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   92,    2, 0x0a /* Public */,
       4,    1,   93,    2, 0x0a /* Public */,
       6,    1,   96,    2, 0x0a /* Public */,
       8,    0,   99,    2, 0x0a /* Public */,
       4,    1,  100,    2, 0x0a /* Public */,
       6,    1,  103,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    1,  107,    2, 0x0a /* Public */,
      12,    0,  110,    2, 0x0a /* Public */,
      13,    1,  111,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    1,  115,    2, 0x0a /* Public */,
      18,    1,  118,    2, 0x0a /* Public */,
      18,    0,  121,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::QReal,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::QReal,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::QReal,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Double,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,

       0        // eod
};

void PowerPlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PowerPlot *_t = static_cast<PowerPlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { qreal _r = _t->dinTemp();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setDinTemp((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setDinAirPressure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { qreal _r = _t->dinAirPressure();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setDinTemp((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setDinAirPressure((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: { qreal _r = _t->getCarMass();
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setCarMass((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: { int _r = _t->getSmoothAmount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setSmoothAmount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: { double _r = _t->getDriveTrainLoss();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setDriveTrainLoss((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->reCalculate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->reCalculate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PowerPlot::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PowerPlot::resultString)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PowerPlot::staticMetaObject = {
    { &MdPlot::staticMetaObject, qt_meta_stringdata_PowerPlot.data,
      qt_meta_data_PowerPlot,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PowerPlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PowerPlot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PowerPlot.stringdata0))
        return static_cast<void*>(this);
    return MdPlot::qt_metacast(_clname);
}

int PowerPlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MdPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PowerPlot::resultString(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
