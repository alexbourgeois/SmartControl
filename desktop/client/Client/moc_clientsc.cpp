/****************************************************************************
** Meta object code from reading C++ file 'clientsc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clientsc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientSC_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSC_t qt_meta_stringdata_ClientSC = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ClientSC"
QT_MOC_LITERAL(1, 9, 21), // "connectionEstablished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "valuesAcquired"
QT_MOC_LITERAL(4, 47, 11), // "sendMessage"
QT_MOC_LITERAL(5, 59, 17), // "serviceDiscovered"
QT_MOC_LITERAL(6, 77, 21), // "QBluetoothServiceInfo"
QT_MOC_LITERAL(7, 99, 17), // "discoveryFinished"
QT_MOC_LITERAL(8, 117, 9), // "askSensor"
QT_MOC_LITERAL(9, 127, 14), // "analyzeMessage"
QT_MOC_LITERAL(10, 142, 6), // "sender"
QT_MOC_LITERAL(11, 149, 3), // "msg"
QT_MOC_LITERAL(12, 153, 9), // "connected"
QT_MOC_LITERAL(13, 163, 4), // "name"
QT_MOC_LITERAL(14, 168, 18) // "clientDisconnected"

    },
    "ClientSC\0connectionEstablished\0\0"
    "valuesAcquired\0sendMessage\0serviceDiscovered\0"
    "QBluetoothServiceInfo\0discoveryFinished\0"
    "askSensor\0analyzeMessage\0sender\0msg\0"
    "connected\0name\0clientDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    4,   67,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   79,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    2,   84,    2, 0x08 /* Private */,
      12,    1,   89,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      14,    0,   95,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,

       0        // eod
};

void ClientSC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientSC *_t = static_cast<ClientSC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionEstablished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valuesAcquired((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 2: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothServiceInfo(*)>(_a[1]))); break;
        case 4: _t->discoveryFinished(); break;
        case 5: _t->askSensor(); break;
        case 6: _t->analyzeMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->connected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->clientDisconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->clientDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothServiceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ClientSC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSC::connectionEstablished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ClientSC::*_t)(int , float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSC::valuesAcquired)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ClientSC::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSC::sendMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ClientSC::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClientSC.data,
      qt_meta_data_ClientSC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ClientSC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientSC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ClientSC.stringdata0))
        return static_cast<void*>(const_cast< ClientSC*>(this));
    return QObject::qt_metacast(_clname);
}

int ClientSC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ClientSC::connectionEstablished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientSC::valuesAcquired(int _t1, float _t2, float _t3, float _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientSC::sendMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
