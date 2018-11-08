/****************************************************************************
** Meta object code from reading C++ file 'MdAbstractCom.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/com/MdAbstractCom.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdAbstractCom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MdAbstractCom_t {
    QByteArrayData data[18];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MdAbstractCom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MdAbstractCom_t qt_meta_stringdata_MdAbstractCom = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MdAbstractCom"
QT_MOC_LITERAL(1, 14, 17), // "showStatusMessage"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 24), // "showStatusBarSampleCount"
QT_MOC_LITERAL(4, 58, 10), // "portOpened"
QT_MOC_LITERAL(5, 69, 10), // "portClosed"
QT_MOC_LITERAL(6, 80, 9), // "bytesRead"
QT_MOC_LITERAL(7, 90, 10), // "togglePort"
QT_MOC_LITERAL(8, 101, 9), // "closePort"
QT_MOC_LITERAL(9, 111, 8), // "openPort"
QT_MOC_LITERAL(10, 120, 9), // "setupPort"
QT_MOC_LITERAL(11, 130, 5), // "sport"
QT_MOC_LITERAL(12, 136, 5), // "speed"
QT_MOC_LITERAL(13, 142, 18), // "changePortSettings"
QT_MOC_LITERAL(14, 161, 11), // "transmitMsg"
QT_MOC_LITERAL(15, 173, 1), // "s"
QT_MOC_LITERAL(16, 175, 2), // "ba"
QT_MOC_LITERAL(17, 178, 11) // "onReadyRead"

    },
    "MdAbstractCom\0showStatusMessage\0\0"
    "showStatusBarSampleCount\0portOpened\0"
    "portClosed\0bytesRead\0togglePort\0"
    "closePort\0openPort\0setupPort\0sport\0"
    "speed\0changePortSettings\0transmitMsg\0"
    "s\0ba\0onReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MdAbstractCom[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    1,  102,    2, 0x06 /* Public */,
       4,    0,  105,    2, 0x06 /* Public */,
       5,    0,  106,    2, 0x06 /* Public */,
       6,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  110,    2, 0x0a /* Public */,
       8,    0,  111,    2, 0x0a /* Public */,
       9,    0,  112,    2, 0x0a /* Public */,
      10,    2,  113,    2, 0x0a /* Public */,
      10,    1,  118,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  121,    2, 0x2a /* Public | MethodCloned */,
      13,    2,  122,    2, 0x0a /* Public */,
      13,    1,  127,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  130,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  131,    2, 0x0a /* Public */,
      14,    1,  134,    2, 0x0a /* Public */,
      17,    0,  137,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Bool, QMetaType::QString,   11,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Bool, QMetaType::QString,   11,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QByteArray,   16,
    QMetaType::Void,

       0        // eod
};

void MdAbstractCom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MdAbstractCom *_t = static_cast<MdAbstractCom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showStatusBarSampleCount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->portOpened(); break;
        case 3: _t->portClosed(); break;
        case 4: _t->bytesRead((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->togglePort(); break;
        case 6: _t->closePort(); break;
        case 7: _t->openPort(); break;
        case 8: { bool _r = _t->setupPort((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->setupPort((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->setupPort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->changePortSettings((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->changePortSettings((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->changePortSettings();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->transmitMsg((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->transmitMsg((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 16: _t->onReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MdAbstractCom::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdAbstractCom::showStatusMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MdAbstractCom::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdAbstractCom::showStatusBarSampleCount)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MdAbstractCom::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdAbstractCom::portOpened)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MdAbstractCom::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdAbstractCom::portClosed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MdAbstractCom::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdAbstractCom::bytesRead)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject MdAbstractCom::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MdAbstractCom.data,
      qt_meta_data_MdAbstractCom,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MdAbstractCom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdAbstractCom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MdAbstractCom.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdAbstractCom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MdAbstractCom::showStatusMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MdAbstractCom::showStatusBarSampleCount(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MdAbstractCom::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MdAbstractCom::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MdAbstractCom::bytesRead(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
