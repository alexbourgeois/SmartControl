/****************************************************************************
** Meta object code from reading C++ file 'bluetoothserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bluetoothserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bluetoothServer_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bluetoothServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bluetoothServer_t qt_meta_stringdata_bluetoothServer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "bluetoothServer"
QT_MOC_LITERAL(1, 16, 21), // "signalClientConnected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "error"
QT_MOC_LITERAL(4, 45, 15), // "messageReceived"
QT_MOC_LITERAL(5, 61, 6), // "sender"
QT_MOC_LITERAL(6, 68, 7), // "message"
QT_MOC_LITERAL(7, 76, 15), // "clientConnected"
QT_MOC_LITERAL(8, 92, 4), // "name"
QT_MOC_LITERAL(9, 97, 18), // "clientDisconnected"
QT_MOC_LITERAL(10, 116, 11), // "sendMessage"
QT_MOC_LITERAL(11, 128, 5), // "trash"
QT_MOC_LITERAL(12, 134, 23), // "QBluetoothServer::Error"
QT_MOC_LITERAL(13, 158, 10) // "readSocket"

    },
    "bluetoothServer\0signalClientConnected\0"
    "\0error\0messageReceived\0sender\0message\0"
    "clientConnected\0name\0clientDisconnected\0"
    "sendMessage\0trash\0QBluetoothServer::Error\0"
    "readSocket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bluetoothServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       4,    2,   68,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       9,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
       7,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void bluetoothServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        bluetoothServer *_t = static_cast<bluetoothServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalClientConnected(); break;
        case 1: _t->error((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->messageReceived((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->clientConnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->clientDisconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->trash((*reinterpret_cast< QBluetoothServer::Error(*)>(_a[1]))); break;
        case 7: _t->clientConnected(); break;
        case 8: _t->clientDisconnected(); break;
        case 9: _t->readSocket(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (bluetoothServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetoothServer::signalClientConnected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (bluetoothServer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetoothServer::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (bluetoothServer::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetoothServer::messageReceived)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (bluetoothServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetoothServer::clientConnected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (bluetoothServer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&bluetoothServer::clientDisconnected)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject bluetoothServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bluetoothServer.data,
      qt_meta_data_bluetoothServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bluetoothServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bluetoothServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bluetoothServer.stringdata0))
        return static_cast<void*>(const_cast< bluetoothServer*>(this));
    return QObject::qt_metacast(_clname);
}

int bluetoothServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void bluetoothServer::signalClientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void bluetoothServer::error(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bluetoothServer::messageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bluetoothServer::clientConnected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void bluetoothServer::clientDisconnected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
