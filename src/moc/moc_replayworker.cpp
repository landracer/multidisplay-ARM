/****************************************************************************
** Meta object code from reading C++ file 'replayworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/thread/replayworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'replayworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReplayWorker_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReplayWorker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReplayWorker_t qt_meta_stringdata_ReplayWorker = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ReplayWorker"
QT_MOC_LITERAL(1, 13, 19), // "visualizeDataRecord"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "MdDataRecord*"
QT_MOC_LITERAL(4, 48, 10), // "clearPlots"
QT_MOC_LITERAL(5, 59, 17), // "showStatusMessage"
QT_MOC_LITERAL(6, 77, 6), // "update"
QT_MOC_LITERAL(7, 84, 5), // "pause"
QT_MOC_LITERAL(8, 90, 6), // "resume"
QT_MOC_LITERAL(9, 97, 4) // "stop"

    },
    "ReplayWorker\0visualizeDataRecord\0\0"
    "MdDataRecord*\0clearPlots\0showStatusMessage\0"
    "update\0pause\0resume\0stop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReplayWorker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       4,    0,   54,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReplayWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReplayWorker *_t = static_cast<ReplayWorker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->visualizeDataRecord((*reinterpret_cast< MdDataRecord*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->clearPlots(); break;
        case 2: _t->showStatusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->update(); break;
        case 4: _t->pause(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ReplayWorker::*_t)(MdDataRecord * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplayWorker::visualizeDataRecord)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ReplayWorker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplayWorker::clearPlots)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ReplayWorker::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReplayWorker::showStatusMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ReplayWorker::staticMetaObject = {
    { &WorkerJob::staticMetaObject, qt_meta_stringdata_ReplayWorker.data,
      qt_meta_data_ReplayWorker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReplayWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReplayWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReplayWorker.stringdata0))
        return static_cast<void*>(this);
    return WorkerJob::qt_metacast(_clname);
}

int ReplayWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WorkerJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ReplayWorker::visualizeDataRecord(MdDataRecord * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReplayWorker::clearPlots()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ReplayWorker::showStatusMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
