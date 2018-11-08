/****************************************************************************
** Meta object code from reading C++ file 'MdBinaryProtocol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../multidisplay-app/src/com/MdBinaryProtocol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdBinaryProtocol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MdBinaryProtocol_t {
    QByteArrayData data[72];
    char stringdata0[956];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MdBinaryProtocol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MdBinaryProtocol_t qt_meta_stringdata_MdBinaryProtocol = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MdBinaryProtocol"
QT_MOC_LITERAL(1, 17, 10), // "portOpened"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "portClosed"
QT_MOC_LITERAL(4, 40, 18), // "n75DutyMapreceived"
QT_MOC_LITERAL(5, 59, 4), // "gear"
QT_MOC_LITERAL(6, 64, 4), // "mode"
QT_MOC_LITERAL(7, 69, 6), // "serial"
QT_MOC_LITERAL(8, 76, 16), // "QVector<quint8>*"
QT_MOC_LITERAL(9, 93, 4), // "data"
QT_MOC_LITERAL(10, 98, 22), // "n75SetpointMapreceived"
QT_MOC_LITERAL(11, 121, 16), // "QVector<double>*"
QT_MOC_LITERAL(12, 138, 11), // "ackReceived"
QT_MOC_LITERAL(13, 150, 19), // "n75SettingsReceived"
QT_MOC_LITERAL(14, 170, 3), // "aKp"
QT_MOC_LITERAL(15, 174, 3), // "aKi"
QT_MOC_LITERAL(16, 178, 3), // "aKd"
QT_MOC_LITERAL(17, 182, 3), // "cKp"
QT_MOC_LITERAL(18, 186, 3), // "cKi"
QT_MOC_LITERAL(19, 190, 3), // "cKd"
QT_MOC_LITERAL(20, 194, 3), // "aAT"
QT_MOC_LITERAL(21, 198, 3), // "cAT"
QT_MOC_LITERAL(22, 202, 11), // "pid_enabled"
QT_MOC_LITERAL(23, 214, 8), // "maxBoost"
QT_MOC_LITERAL(24, 223, 23), // "gearboxSettingsReceived"
QT_MOC_LITERAL(25, 247, 2), // "g1"
QT_MOC_LITERAL(26, 250, 2), // "g2"
QT_MOC_LITERAL(27, 253, 2), // "g3"
QT_MOC_LITERAL(28, 256, 2), // "g4"
QT_MOC_LITERAL(29, 259, 2), // "g5"
QT_MOC_LITERAL(30, 262, 2), // "g6"
QT_MOC_LITERAL(31, 265, 13), // "frameReceived"
QT_MOC_LITERAL(32, 279, 17), // "showStatusMessage"
QT_MOC_LITERAL(33, 297, 24), // "showStatusBarSampleCount"
QT_MOC_LITERAL(34, 322, 7), // "mdCmdAp"
QT_MOC_LITERAL(35, 330, 7), // "mdCmdAh"
QT_MOC_LITERAL(36, 338, 7), // "mdCmdBp"
QT_MOC_LITERAL(37, 346, 7), // "mdCmdBh"
QT_MOC_LITERAL(38, 354, 25), // "mdCmdActivateSerialOutput"
QT_MOC_LITERAL(39, 380, 31), // "mdCmdActivateSerialBinaryOutput"
QT_MOC_LITERAL(40, 412, 24), // "mdCmdDisableSerialOutput"
QT_MOC_LITERAL(41, 437, 13), // "mdCmdCalBoost"
QT_MOC_LITERAL(42, 451, 15), // "mdCmdReadEeprom"
QT_MOC_LITERAL(43, 467, 19), // "mdCmdLoadFromEeprom"
QT_MOC_LITERAL(44, 487, 16), // "mdCmdSave2Eeprom"
QT_MOC_LITERAL(45, 504, 18), // "mdCmdReqN75DutyMap"
QT_MOC_LITERAL(46, 523, 22), // "mdCmdReqN75SetpointMap"
QT_MOC_LITERAL(47, 546, 20), // "mdCmdWriteN75DutyMap"
QT_MOC_LITERAL(48, 567, 24), // "mdCmdWriteN75SetpointMap"
QT_MOC_LITERAL(49, 592, 25), // "mdCmdWriteN75MapsToEEprom"
QT_MOC_LITERAL(50, 618, 26), // "mdCmdLoadN75MapsFromEEprom"
QT_MOC_LITERAL(51, 645, 19), // "mdCmdReqN75Settings"
QT_MOC_LITERAL(52, 665, 21), // "mdCmdWriteN75Settings"
QT_MOC_LITERAL(53, 687, 30), // "mdCmdReadN75SettingsFromEEprom"
QT_MOC_LITERAL(54, 718, 29), // "mdCmdWriteN75SettingsToEEprom"
QT_MOC_LITERAL(55, 748, 13), // "mdSendCommand"
QT_MOC_LITERAL(56, 762, 3), // "cmd"
QT_MOC_LITERAL(57, 766, 6), // "subcmd"
QT_MOC_LITERAL(58, 773, 23), // "mdCmdSetSerialFrequency"
QT_MOC_LITERAL(59, 797, 9), // "frequency"
QT_MOC_LITERAL(60, 807, 16), // "mdCmdReadGearbox"
QT_MOC_LITERAL(61, 824, 17), // "mdCmdWriteGearbox"
QT_MOC_LITERAL(62, 842, 8), // "openPort"
QT_MOC_LITERAL(63, 851, 9), // "closePort"
QT_MOC_LITERAL(64, 861, 18), // "changePortSettings"
QT_MOC_LITERAL(65, 880, 5), // "sport"
QT_MOC_LITERAL(66, 886, 5), // "speed"
QT_MOC_LITERAL(67, 892, 12), // "incomingData"
QT_MOC_LITERAL(68, 905, 5), // "bytes"
QT_MOC_LITERAL(69, 911, 12), // "onPortOpened"
QT_MOC_LITERAL(70, 924, 12), // "onPortClosed"
QT_MOC_LITERAL(71, 937, 18) // "debugDataGenUpdate"

    },
    "MdBinaryProtocol\0portOpened\0\0portClosed\0"
    "n75DutyMapreceived\0gear\0mode\0serial\0"
    "QVector<quint8>*\0data\0n75SetpointMapreceived\0"
    "QVector<double>*\0ackReceived\0"
    "n75SettingsReceived\0aKp\0aKi\0aKd\0cKp\0"
    "cKi\0cKd\0aAT\0cAT\0pid_enabled\0maxBoost\0"
    "gearboxSettingsReceived\0g1\0g2\0g3\0g4\0"
    "g5\0g6\0frameReceived\0showStatusMessage\0"
    "showStatusBarSampleCount\0mdCmdAp\0"
    "mdCmdAh\0mdCmdBp\0mdCmdBh\0"
    "mdCmdActivateSerialOutput\0"
    "mdCmdActivateSerialBinaryOutput\0"
    "mdCmdDisableSerialOutput\0mdCmdCalBoost\0"
    "mdCmdReadEeprom\0mdCmdLoadFromEeprom\0"
    "mdCmdSave2Eeprom\0mdCmdReqN75DutyMap\0"
    "mdCmdReqN75SetpointMap\0mdCmdWriteN75DutyMap\0"
    "mdCmdWriteN75SetpointMap\0"
    "mdCmdWriteN75MapsToEEprom\0"
    "mdCmdLoadN75MapsFromEEprom\0"
    "mdCmdReqN75Settings\0mdCmdWriteN75Settings\0"
    "mdCmdReadN75SettingsFromEEprom\0"
    "mdCmdWriteN75SettingsToEEprom\0"
    "mdSendCommand\0cmd\0subcmd\0"
    "mdCmdSetSerialFrequency\0frequency\0"
    "mdCmdReadGearbox\0mdCmdWriteGearbox\0"
    "openPort\0closePort\0changePortSettings\0"
    "sport\0speed\0incomingData\0bytes\0"
    "onPortOpened\0onPortClosed\0debugDataGenUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MdBinaryProtocol[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  259,    2, 0x06 /* Public */,
       3,    0,  260,    2, 0x06 /* Public */,
       4,    4,  261,    2, 0x06 /* Public */,
      10,    4,  270,    2, 0x06 /* Public */,
      12,    1,  279,    2, 0x06 /* Public */,
      13,   11,  282,    2, 0x06 /* Public */,
      24,    7,  305,    2, 0x06 /* Public */,
      31,    0,  320,    2, 0x06 /* Public */,
      32,    1,  321,    2, 0x06 /* Public */,
      33,    1,  324,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    0,  327,    2, 0x0a /* Public */,
      35,    0,  328,    2, 0x0a /* Public */,
      36,    0,  329,    2, 0x0a /* Public */,
      37,    0,  330,    2, 0x0a /* Public */,
      38,    0,  331,    2, 0x0a /* Public */,
      39,    0,  332,    2, 0x0a /* Public */,
      40,    0,  333,    2, 0x0a /* Public */,
      41,    0,  334,    2, 0x0a /* Public */,
      42,    0,  335,    2, 0x0a /* Public */,
      43,    0,  336,    2, 0x0a /* Public */,
      44,    0,  337,    2, 0x0a /* Public */,
      45,    3,  338,    2, 0x0a /* Public */,
      46,    3,  345,    2, 0x0a /* Public */,
      47,    4,  352,    2, 0x0a /* Public */,
      48,    4,  361,    2, 0x0a /* Public */,
      49,    0,  370,    2, 0x0a /* Public */,
      50,    0,  371,    2, 0x0a /* Public */,
      51,    1,  372,    2, 0x0a /* Public */,
      51,    0,  375,    2, 0x2a /* Public | MethodCloned */,
      52,   11,  376,    2, 0x0a /* Public */,
      53,    1,  399,    2, 0x0a /* Public */,
      53,    0,  402,    2, 0x2a /* Public | MethodCloned */,
      54,    1,  403,    2, 0x0a /* Public */,
      54,    0,  406,    2, 0x2a /* Public | MethodCloned */,
      55,    3,  407,    2, 0x0a /* Public */,
      55,    2,  414,    2, 0x2a /* Public | MethodCloned */,
      58,    2,  419,    2, 0x0a /* Public */,
      58,    1,  424,    2, 0x2a /* Public | MethodCloned */,
      60,    1,  427,    2, 0x0a /* Public */,
      60,    0,  430,    2, 0x2a /* Public | MethodCloned */,
      61,    7,  431,    2, 0x0a /* Public */,
      61,    6,  446,    2, 0x2a /* Public | MethodCloned */,
      62,    0,  459,    2, 0x0a /* Public */,
      63,    0,  460,    2, 0x0a /* Public */,
      64,    2,  461,    2, 0x0a /* Public */,
      67,    1,  466,    2, 0x08 /* Private */,
      69,    0,  469,    2, 0x09 /* Protected */,
      70,    0,  470,    2, 0x09 /* Protected */,
      71,    0,  471,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 8,    5,    6,    7,    9,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 11,    5,    6,    7,    9,
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void, QMetaType::UChar, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Double,    7,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::UChar, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    7,   25,   26,   27,   28,   29,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    5,    6,    7,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,    5,    6,    7,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 8,    5,    6,    7,    9,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar, 0x80000000 | 11,    5,    6,    7,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Bool, QMetaType::Double,    7,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar, QMetaType::UChar,   56,   57,    7,
    QMetaType::Void, QMetaType::UChar, QMetaType::UChar,   56,   57,
    QMetaType::Void, QMetaType::UShort, QMetaType::UChar,   59,    7,
    QMetaType::Void, QMetaType::UShort,   59,
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::UChar,   25,   26,   27,   28,   29,   30,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   25,   26,   27,   28,   29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   65,   66,
    QMetaType::Void, QMetaType::QByteArray,   68,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MdBinaryProtocol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MdBinaryProtocol *_t = static_cast<MdBinaryProtocol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->portOpened(); break;
        case 1: _t->portClosed(); break;
        case 2: _t->n75DutyMapreceived((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<quint8>*(*)>(_a[4]))); break;
        case 3: _t->n75SetpointMapreceived((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<double>*(*)>(_a[4]))); break;
        case 4: _t->ackReceived((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 5: _t->n75SettingsReceived((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11]))); break;
        case 6: _t->gearboxSettingsReceived((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7]))); break;
        case 7: _t->frameReceived(); break;
        case 8: _t->showStatusMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->showStatusBarSampleCount((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->mdCmdAp(); break;
        case 11: _t->mdCmdAh(); break;
        case 12: _t->mdCmdBp(); break;
        case 13: _t->mdCmdBh(); break;
        case 14: _t->mdCmdActivateSerialOutput(); break;
        case 15: _t->mdCmdActivateSerialBinaryOutput(); break;
        case 16: _t->mdCmdDisableSerialOutput(); break;
        case 17: _t->mdCmdCalBoost(); break;
        case 18: _t->mdCmdReadEeprom(); break;
        case 19: _t->mdCmdLoadFromEeprom(); break;
        case 20: _t->mdCmdSave2Eeprom(); break;
        case 21: _t->mdCmdReqN75DutyMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 22: _t->mdCmdReqN75SetpointMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 23: _t->mdCmdWriteN75DutyMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<quint8>*(*)>(_a[4]))); break;
        case 24: _t->mdCmdWriteN75SetpointMap((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3])),(*reinterpret_cast< QVector<double>*(*)>(_a[4]))); break;
        case 25: _t->mdCmdWriteN75MapsToEEprom(); break;
        case 26: _t->mdCmdLoadN75MapsFromEEprom(); break;
        case 27: _t->mdCmdReqN75Settings((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 28: _t->mdCmdReqN75Settings(); break;
        case 29: _t->mdCmdWriteN75Settings((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< bool(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11]))); break;
        case 30: _t->mdCmdReadN75SettingsFromEEprom((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 31: _t->mdCmdReadN75SettingsFromEEprom(); break;
        case 32: _t->mdCmdWriteN75SettingsToEEprom((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 33: _t->mdCmdWriteN75SettingsToEEprom(); break;
        case 34: _t->mdSendCommand((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 35: _t->mdSendCommand((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 36: _t->mdCmdSetSerialFrequency((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< quint8(*)>(_a[2]))); break;
        case 37: _t->mdCmdSetSerialFrequency((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 38: _t->mdCmdReadGearbox((*reinterpret_cast< quint8(*)>(_a[1]))); break;
        case 39: _t->mdCmdReadGearbox(); break;
        case 40: _t->mdCmdWriteGearbox((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< quint8(*)>(_a[7]))); break;
        case 41: _t->mdCmdWriteGearbox((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 42: _t->openPort(); break;
        case 43: _t->closePort(); break;
        case 44: { bool _r = _t->changePortSettings((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->incomingData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 46: _t->onPortOpened(); break;
        case 47: _t->onPortClosed(); break;
        case 48: _t->debugDataGenUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MdBinaryProtocol::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::portOpened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::portClosed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(quint8 , quint8 , quint8 , QVector<quint8> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::n75DutyMapreceived)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(quint8 , quint8 , quint8 , QVector<double> * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::n75SetpointMapreceived)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(quint8 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::ackReceived)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(quint8 , double , double , double , double , double , double , double , double , bool , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::n75SettingsReceived)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(quint8 , double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::gearboxSettingsReceived)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::frameReceived)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::showStatusMessage)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MdBinaryProtocol::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdBinaryProtocol::showStatusBarSampleCount)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MdBinaryProtocol::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MdBinaryProtocol.data,
      qt_meta_data_MdBinaryProtocol,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MdBinaryProtocol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdBinaryProtocol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MdBinaryProtocol.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdBinaryProtocol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void MdBinaryProtocol::portOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MdBinaryProtocol::portClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MdBinaryProtocol::n75DutyMapreceived(quint8 _t1, quint8 _t2, quint8 _t3, QVector<quint8> * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MdBinaryProtocol::n75SetpointMapreceived(quint8 _t1, quint8 _t2, quint8 _t3, QVector<double> * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MdBinaryProtocol::ackReceived(quint8 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MdBinaryProtocol::n75SettingsReceived(quint8 _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9, bool _t10, double _t11)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)), const_cast<void*>(reinterpret_cast<const void*>(&_t11)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MdBinaryProtocol::gearboxSettingsReceived(quint8 _t1, double _t2, double _t3, double _t4, double _t5, double _t6, double _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MdBinaryProtocol::frameReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MdBinaryProtocol::showStatusMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MdBinaryProtocol::showStatusBarSampleCount(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
