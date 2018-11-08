/****************************************************************************
** Meta object code from reading C++ file 'AndroidN75Dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/mobile/AndroidN75Dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AndroidN75Dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AndroidN75Dialog_t {
    QByteArrayData data[20];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AndroidN75Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AndroidN75Dialog_t qt_meta_stringdata_AndroidN75Dialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AndroidN75Dialog"
QT_MOC_LITERAL(1, 17, 13), // "n75reqDutyMap"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "gear"
QT_MOC_LITERAL(4, 37, 4), // "mode"
QT_MOC_LITERAL(5, 42, 6), // "serial"
QT_MOC_LITERAL(6, 49, 17), // "n75reqSetpointMap"
QT_MOC_LITERAL(7, 67, 15), // "n75writeDutyMap"
QT_MOC_LITERAL(8, 83, 16), // "QVector<quint8>*"
QT_MOC_LITERAL(9, 100, 4), // "data"
QT_MOC_LITERAL(10, 105, 19), // "n75writeSetpointMap"
QT_MOC_LITERAL(11, 125, 16), // "QVector<double>*"
QT_MOC_LITERAL(12, 142, 11), // "n75readSlow"
QT_MOC_LITERAL(13, 154, 3), // "idx"
QT_MOC_LITERAL(14, 158, 12), // "n75writeSlow"
QT_MOC_LITERAL(15, 171, 10), // "n75dutyMap"
QT_MOC_LITERAL(16, 182, 14), // "n75SetpointMap"
QT_MOC_LITERAL(17, 197, 11), // "ackReceived"
QT_MOC_LITERAL(18, 209, 15), // "timerUpdateRead"
QT_MOC_LITERAL(19, 225, 16) // "timerUpdateWrite"

    },
    "AndroidN75Dialog\0n75reqDutyMap\0\0gear\0"
    "mode\0serial\0n75reqSetpointMap\0"
    "n75writeDutyMap\0QVector<quint8>*\0data\0"
    "n75writeSetpointMap\0QVector<double>*\0"
    "n75readSlow\0idx\0n75writeSlow\0n75dutyMap\0"
    "n75SetpointMap\0ackReceived\0timerUpdateRead\0"
    "timerUpdateWrite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AndroidN75Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,
       6,    3,   86,    2, 0x06 /* Public */,
       7,    4,   93,    2, 0x06 /* Public */,
      10,    4,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  111,    2, 0x0a /* Public */,
      12,    0,  114,    2, 0x2a /* Public | MethodCloned */,
      14,    1,  115,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x2a /* Public | MethodCloned */,
      15,    4,  119,    2, 0x0a /* Public */,
      16,    4,  128,    2, 0x0a /* Public */,
      17,    1,  137,    2, 0x0a /* Public */,
      18,    0,  140,    2, 0x0a /* Public */,
      19,    0,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    3,    4,    5,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    3,    4,    5,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 8,    3,    4,    5,    9,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 11,    3,    4,    5,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 8,    3,    4,    5,    9,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 11,    3,    4,    5,    9,
    QMetaType::Void, QMetaType::UChar,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AndroidN75Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AndroidN75Dialog *_t = static_cast<AndroidN75Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->n75reqDutyMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 1: _t->n75reqSetpointMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 2: _t->n75writeDutyMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<quint8>*(*)>(_a[4]))); break;
        case 3: _t->n75writeSetpointMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<double>*(*)>(_a[4]))); break;
        case 4: _t->n75readSlow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->n75readSlow(); break;
        case 6: _t->n75writeSlow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->n75writeSlow(); break;
        case 8: _t->n75dutyMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<quint8>*(*)>(_a[4]))); break;
        case 9: _t->n75SetpointMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<double>*(*)>(_a[4]))); break;
        case 10: _t->ackReceived((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 11: _t->timerUpdateRead(); break;
        case 12: _t->timerUpdateWrite(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AndroidN75Dialog::*_t)(quint8 , quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidN75Dialog::n75reqDutyMap)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AndroidN75Dialog::*_t)(quint8 , quint8 , quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidN75Dialog::n75reqSetpointMap)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AndroidN75Dialog::*_t)(quint8 , quint8 , quint8 , QVector<quint8> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidN75Dialog::n75writeDutyMap)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AndroidN75Dialog::*_t)(quint8 , quint8 , quint8 , QVector<double> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AndroidN75Dialog::n75writeSetpointMap)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject AndroidN75Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AndroidN75Dialog.data,
      qt_meta_data_AndroidN75Dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AndroidN75Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AndroidN75Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AndroidN75Dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AndroidN75Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void AndroidN75Dialog::n75reqDutyMap(quint8 _t1, quint8 _t2, quint8 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AndroidN75Dialog::n75reqSetpointMap(quint8 _t1, quint8 _t2, quint8 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AndroidN75Dialog::n75writeDutyMap(quint8 _t1, quint8 _t2, quint8 _t3, QVector<quint8> * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AndroidN75Dialog::n75writeSetpointMap(quint8 _t1, quint8 _t2, quint8 _t3, QVector<double> * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
