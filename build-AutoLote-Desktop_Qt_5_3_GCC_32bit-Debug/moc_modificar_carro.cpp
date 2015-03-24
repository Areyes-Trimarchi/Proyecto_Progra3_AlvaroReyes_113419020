/****************************************************************************
** Meta object code from reading C++ file 'modificar_carro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AutoLote/modificar_carro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modificar_carro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Modificar_carro_t {
    QByteArrayData data[8];
    char stringdata[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Modificar_carro_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Modificar_carro_t qt_meta_stringdata_Modificar_carro = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 45),
QT_MOC_LITERAL(2, 62, 0),
QT_MOC_LITERAL(3, 63, 42),
QT_MOC_LITERAL(4, 106, 41),
QT_MOC_LITERAL(5, 148, 31),
QT_MOC_LITERAL(6, 180, 5),
QT_MOC_LITERAL(7, 186, 37)
    },
    "Modificar_carro\0"
    "on_rb_estado_reparado_carro_modificar_clicked\0"
    "\0on_rb_estado_bueno_carro_modificar_clicked\0"
    "on_rb_estado_malo_carro_modificar_clicked\0"
    "on_cb_modificar_carro_activated\0index\0"
    "on_pb_modificar_carro_aceptar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Modificar_carro[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void Modificar_carro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Modificar_carro *_t = static_cast<Modificar_carro *>(_o);
        switch (_id) {
        case 0: _t->on_rb_estado_reparado_carro_modificar_clicked(); break;
        case 1: _t->on_rb_estado_bueno_carro_modificar_clicked(); break;
        case 2: _t->on_rb_estado_malo_carro_modificar_clicked(); break;
        case 3: _t->on_cb_modificar_carro_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pb_modificar_carro_aceptar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Modificar_carro::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Modificar_carro.data,
      qt_meta_data_Modificar_carro,  qt_static_metacall, 0, 0}
};


const QMetaObject *Modificar_carro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Modificar_carro::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Modificar_carro.stringdata))
        return static_cast<void*>(const_cast< Modificar_carro*>(this));
    return QDialog::qt_metacast(_clname);
}

int Modificar_carro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
