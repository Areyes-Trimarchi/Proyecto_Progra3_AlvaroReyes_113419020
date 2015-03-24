/****************************************************************************
** Meta object code from reading C++ file 'agregar_moto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AutoLote/agregar_moto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agregar_moto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Agregar_moto_t {
    QByteArrayData data[11];
    char stringdata[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Agregar_moto_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Agregar_moto_t qt_meta_stringdata_Agregar_moto = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 27),
QT_MOC_LITERAL(2, 41, 0),
QT_MOC_LITERAL(3, 42, 27),
QT_MOC_LITERAL(4, 70, 40),
QT_MOC_LITERAL(5, 111, 37),
QT_MOC_LITERAL(6, 149, 36),
QT_MOC_LITERAL(7, 186, 34),
QT_MOC_LITERAL(8, 221, 31),
QT_MOC_LITERAL(9, 253, 30),
QT_MOC_LITERAL(10, 284, 34)
    },
    "Agregar_moto\0on_rb_carretilla_si_clicked\0"
    "\0on_rb_carretilla_no_clicked\0"
    "on_rb_estado_reparado_carretilla_clicked\0"
    "on_rb_estado_bueno_carretilla_clicked\0"
    "on_rb_estado_malo_carretilla_clicked\0"
    "on_rb_estado_reparado_moto_clicked\0"
    "on_rb_estado_bueno_moto_clicked\0"
    "on_rb_estado_malo_moto_clicked\0"
    "on_pb_agregar_moto_aceptar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Agregar_moto[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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

       0        // eod
};

void Agregar_moto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Agregar_moto *_t = static_cast<Agregar_moto *>(_o);
        switch (_id) {
        case 0: _t->on_rb_carretilla_si_clicked(); break;
        case 1: _t->on_rb_carretilla_no_clicked(); break;
        case 2: _t->on_rb_estado_reparado_carretilla_clicked(); break;
        case 3: _t->on_rb_estado_bueno_carretilla_clicked(); break;
        case 4: _t->on_rb_estado_malo_carretilla_clicked(); break;
        case 5: _t->on_rb_estado_reparado_moto_clicked(); break;
        case 6: _t->on_rb_estado_bueno_moto_clicked(); break;
        case 7: _t->on_rb_estado_malo_moto_clicked(); break;
        case 8: _t->on_pb_agregar_moto_aceptar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Agregar_moto::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Agregar_moto.data,
      qt_meta_data_Agregar_moto,  qt_static_metacall, 0, 0}
};


const QMetaObject *Agregar_moto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Agregar_moto::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Agregar_moto.stringdata))
        return static_cast<void*>(const_cast< Agregar_moto*>(this));
    return QDialog::qt_metacast(_clname);
}

int Agregar_moto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
