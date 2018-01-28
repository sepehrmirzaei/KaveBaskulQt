/****************************************************************************
** Meta object code from reading C++ file 'printbyid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BaskulDesktop/printbyid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'printbyid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrintById_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrintById_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrintById_t qt_meta_stringdata_PrintById = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PrintById"
QT_MOC_LITERAL(1, 10, 11), // "PrintRecord"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "Weightin"
QT_MOC_LITERAL(4, 32, 4), // "full"
QT_MOC_LITERAL(5, 37, 5), // "empty"
QT_MOC_LITERAL(6, 43, 20), // "OnShowLastRecordById"
QT_MOC_LITERAL(7, 64, 7) // "OnPrint"

    },
    "PrintById\0PrintRecord\0\0Weightin\0full\0"
    "empty\0OnShowLastRecordById\0OnPrint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrintById[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   34,    2, 0x0a /* Public */,
       7,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PrintById::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrintById *_t = static_cast<PrintById *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PrintRecord((*reinterpret_cast< Weightin(*)>(_a[1])),(*reinterpret_cast< Weightin(*)>(_a[2]))); break;
        case 1: _t->OnShowLastRecordById(); break;
        case 2: _t->OnPrint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PrintById::*_t)(Weightin , Weightin );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PrintById::PrintRecord)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PrintById::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrintById.data,
      qt_meta_data_PrintById,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PrintById::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrintById::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PrintById.stringdata0))
        return static_cast<void*>(const_cast< PrintById*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrintById::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PrintById::PrintRecord(Weightin _t1, Weightin _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
