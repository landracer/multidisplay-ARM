/****************************************************************************
** Meta object code from reading C++ file 'MdGpsSerial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/MdGpsSerial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdGpsSerial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MdGpsSerial_t {
    QByteArrayData data[12];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MdGpsSerial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MdGpsSerial_t qt_meta_stringdata_MdGpsSerial = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MdGpsSerial"
QT_MOC_LITERAL(1, 12, 9), // "bytesRead"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "stringRead"
QT_MOC_LITERAL(4, 34, 8), // "lineRead"
QT_MOC_LITERAL(5, 43, 17), // "showStatusMessage"
QT_MOC_LITERAL(6, 61, 10), // "portOpened"
QT_MOC_LITERAL(7, 72, 10), // "portClosed"
QT_MOC_LITERAL(8, 83, 9), // "closePort"
QT_MOC_LITERAL(9, 93, 8), // "openPort"
QT_MOC_LITERAL(10, 102, 12), // "incomingData"
QT_MOC_LITERAL(11, 115, 5) // "bytes"

    },
    "MdGpsSerial\0bytesRead\0\0stringRead\0"
    "lineRead\0showStatusMessage\0portOpened\0"
    "portClosed\0closePort\0openPort\0"
    "incomingData\0bytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MdGpsSerial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       6,    0,   71,    2, 0x06 /* Public */,
       7,    0,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   73,    2, 0x0a /* Public */,
       9,    0,   74,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,

       0        // eod
};

void MdGpsSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MdGpsSerial *_t = static_cast<MdGpsSerial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bytesRead((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->stringRead((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->lineRead((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->showStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->portOpened(); break;
        case 5: _t->portClosed(); break;
        case 6: _t->closePort(); break;
        case 7: _t->openPort(); break;
        case 8: _t->incomingData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MdGpsSerial::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdGpsSerial::bytesRead)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MdGpsSerial::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdGpsSerial::stringRead)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MdGpsSerial::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdGpsSerial::lineRead)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MdGpsSerial::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdGpsSerial::showStatusMessage)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MdGpsSerial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdGpsSerial::portOpened)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MdGpsSerial::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdGpsSerial::portClosed)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject MdGpsSerial::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MdGpsSerial.data,
      qt_meta_data_MdGpsSerial,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MdGpsSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdGpsSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MdGpsSerial.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdGpsSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MdGpsSerial::bytesRead(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MdGpsSerial::stringRead(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MdGpsSerial::lineRead(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MdGpsSerial::showStatusMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MdGpsSerial::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MdGpsSerial::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
