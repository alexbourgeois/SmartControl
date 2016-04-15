/****************************************************************************
** Meta object code from reading C++ file 'cube3d.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cube3d.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cube3d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cube3D_t {
    QByteArrayData data[11];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cube3D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cube3D_t qt_meta_stringdata_Cube3D = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Cube3D"
QT_MOC_LITERAL(1, 7, 11), // "enableTorus"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "enabled"
QT_MOC_LITERAL(4, 28, 14), // "enableCylinder"
QT_MOC_LITERAL(5, 43, 12), // "enableCuboid"
QT_MOC_LITERAL(6, 56, 12), // "enableSphere"
QT_MOC_LITERAL(7, 69, 6), // "rotate"
QT_MOC_LITERAL(8, 76, 1), // "x"
QT_MOC_LITERAL(9, 78, 1), // "y"
QT_MOC_LITERAL(10, 80, 1) // "z"

    },
    "Cube3D\0enableTorus\0\0enabled\0enableCylinder\0"
    "enableCuboid\0enableSphere\0rotate\0x\0y\0"
    "z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cube3D[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x0a /* Public */,
       5,    1,   45,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       7,    3,   51,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    8,    9,   10,

       0        // eod
};

void Cube3D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cube3D *_t = static_cast<Cube3D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableTorus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableCylinder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableCuboid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableSphere((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->rotate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject Cube3D::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cube3D.data,
      qt_meta_data_Cube3D,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Cube3D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cube3D::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Cube3D.stringdata0))
        return static_cast<void*>(const_cast< Cube3D*>(this));
    return QObject::qt_metacast(_clname);
}

int Cube3D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
