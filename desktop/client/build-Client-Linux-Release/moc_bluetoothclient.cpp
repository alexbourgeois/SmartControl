/****************************************************************************
** Meta object code from reading C++ file 'bluetoothclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Client/bluetoothclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BluetoothClient_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothClient_t qt_meta_stringdata_BluetoothClient = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BluetoothClient"
QT_MOC_LITERAL(1, 16, 15), // "messageReceived"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "sender"
QT_MOC_LITERAL(4, 40, 7), // "message"
QT_MOC_LITERAL(5, 48, 9), // "connected"
QT_MOC_LITERAL(6, 58, 4), // "name"
QT_MOC_LITERAL(7, 63, 12), // "disconnected"
QT_MOC_LITERAL(8, 76, 19), // "signal_StateChanged"
QT_MOC_LITERAL(9, 96, 29), // "QBluetoothSocket::SocketState"
QT_MOC_LITERAL(10, 126, 4), // "test"
QT_MOC_LITERAL(11, 131, 11), // "sendMessage"
QT_MOC_LITERAL(12, 143, 10), // "readSocket"
QT_MOC_LITERAL(13, 154, 12) // "stateChanged"

    },
    "BluetoothClient\0messageReceived\0\0"
    "sender\0message\0connected\0name\0"
    "disconnected\0signal_StateChanged\0"
    "QBluetoothSocket::SocketState\0test\0"
    "sendMessage\0readSocket\0stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    1,   64,    2, 0x06 /* Public */,
       7,    0,   67,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      10,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   72,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x08 /* Private */,
       5,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,

       0        // eod
};

void BluetoothClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluetoothClient *_t = static_cast<BluetoothClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->connected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->disconnected(); break;
        case 3: _t->signal_StateChanged((*reinterpret_cast< QBluetoothSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->test(); break;
        case 5: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->readSocket(); break;
        case 7: _t->connected(); break;
        case 8: _t->stateChanged((*reinterpret_cast< QBluetoothSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BluetoothClient::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothClient::messageReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BluetoothClient::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothClient::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BluetoothClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothClient::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BluetoothClient::*_t)(QBluetoothSocket::SocketState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothClient::signal_StateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BluetoothClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothClient::test)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject BluetoothClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BluetoothClient.data,
      qt_meta_data_BluetoothClient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BluetoothClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothClient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothClient.stringdata0))
        return static_cast<void*>(const_cast< BluetoothClient*>(this));
    return QObject::qt_metacast(_clname);
}

int BluetoothClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BluetoothClient::messageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothClient::connected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BluetoothClient::signal_StateChanged(QBluetoothSocket::SocketState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BluetoothClient::test()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
