/****************************************************************************
** Meta object code from reading C++ file 'window3d.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window3d.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window3d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Window3D_t {
    QByteArrayData data[7];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Window3D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Window3D_t qt_meta_stringdata_Window3D = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Window3D"
QT_MOC_LITERAL(1, 9, 6), // "rotate"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 1), // "x"
QT_MOC_LITERAL(4, 19, 1), // "y"
QT_MOC_LITERAL(5, 21, 1), // "z"
QT_MOC_LITERAL(6, 23, 9) // "calibrate"

    },
    "Window3D\0rotate\0\0x\0y\0z\0calibrate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Window3D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x0a /* Public */,
       6,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    3,    4,    5,
    QMetaType::Void,

       0        // eod
};

void Window3D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Window3D *_t = static_cast<Window3D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rotate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 1: _t->calibrate(); break;
        default: ;
        }
    }
}

const QMetaObject Window3D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Window3D.data,
      qt_meta_data_Window3D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Window3D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Window3D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Window3D.stringdata0))
        return static_cast<void*>(const_cast< Window3D*>(this));
    return QObject::qt_metacast(_clname);
}

int Window3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
