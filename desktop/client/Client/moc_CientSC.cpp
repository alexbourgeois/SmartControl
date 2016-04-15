/****************************************************************************
** Meta object code from reading C++ file 'CientSC.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CientSC.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CientSC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ClientSC_t {
    QByteArrayData data[20];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientSC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientSC_t qt_meta_stringdata_ClientSC = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ClientSC"
QT_MOC_LITERAL(1, 9, 11), // "sendMessage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "rotate"
QT_MOC_LITERAL(4, 29, 1), // "x"
QT_MOC_LITERAL(5, 31, 1), // "y"
QT_MOC_LITERAL(6, 33, 1), // "z"
QT_MOC_LITERAL(7, 35, 11), // "showMessage"
QT_MOC_LITERAL(8, 47, 6), // "sender"
QT_MOC_LITERAL(9, 54, 7), // "message"
QT_MOC_LITERAL(10, 62, 17), // "serviceDiscovered"
QT_MOC_LITERAL(11, 80, 21), // "QBluetoothServiceInfo"
QT_MOC_LITERAL(12, 102, 17), // "discoveryFinished"
QT_MOC_LITERAL(13, 120, 9), // "connected"
QT_MOC_LITERAL(14, 130, 4), // "name"
QT_MOC_LITERAL(15, 135, 18), // "clientDisconnected"
QT_MOC_LITERAL(16, 154, 30), // "on_pushButton_discover_clicked"
QT_MOC_LITERAL(17, 185, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(18, 207, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(19, 231, 23) // "on_pushButton_3_clicked"

    },
    "ClientSC\0sendMessage\0\0rotate\0x\0y\0z\0"
    "showMessage\0sender\0message\0serviceDiscovered\0"
    "QBluetoothServiceInfo\0discoveryFinished\0"
    "connected\0name\0clientDisconnected\0"
    "on_pushButton_discover_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientSC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    3,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   84,    2, 0x08 /* Private */,
      10,    1,   89,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      15,    1,   96,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,
      18,    0,  102,    2, 0x08 /* Private */,
      19,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ClientSC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClientSC *_t = static_cast<ClientSC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->rotate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->serviceDiscovered((*reinterpret_cast< const QBluetoothServiceInfo(*)>(_a[1]))); break;
        case 4: _t->discoveryFinished(); break;
        case 5: _t->connected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->clientDisconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->clientDisconnected(); break;
        case 8: _t->on_pushButton_discover_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
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
            typedef void (ClientSC::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSC::sendMessage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ClientSC::*_t)(float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ClientSC::rotate)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ClientSC::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ClientSC.data,
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
    return QMainWindow::qt_metacast(_clname);
}

int ClientSC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ClientSC::sendMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientSC::rotate(float _t1, float _t2, float _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
