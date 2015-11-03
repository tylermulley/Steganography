/****************************************************************************
** Meta object code from reading C++ file 'hw4_starter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hw4_starter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hw4_starter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HW4_Starter_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HW4_Starter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HW4_Starter_t qt_meta_stringdata_HW4_Starter = {
    {
QT_MOC_LITERAL(0, 0, 11), // "HW4_Starter"
QT_MOC_LITERAL(1, 12, 10), // "sendPixmap"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "sendQString"
QT_MOC_LITERAL(4, 36, 8), // "loadFile"
QT_MOC_LITERAL(5, 45, 8), // "saveFile"
QT_MOC_LITERAL(6, 54, 9), // "writeText"
QT_MOC_LITERAL(7, 64, 8), // "readText"
QT_MOC_LITERAL(8, 73, 10) // "dialUpdate"

    },
    "HW4_Starter\0sendPixmap\0\0sendQString\0"
    "loadFile\0saveFile\0writeText\0readText\0"
    "dialUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HW4_Starter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   55,    2, 0x0a /* Public */,
       5,    0,   56,    2, 0x0a /* Public */,
       6,    0,   57,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void HW4_Starter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HW4_Starter *_t = static_cast<HW4_Starter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendPixmap((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->sendQString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->loadFile(); break;
        case 3: _t->saveFile(); break;
        case 4: _t->writeText(); break;
        case 5: _t->readText(); break;
        case 6: _t->dialUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HW4_Starter::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HW4_Starter::sendPixmap)) {
                *result = 0;
            }
        }
        {
            typedef void (HW4_Starter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HW4_Starter::sendQString)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject HW4_Starter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_HW4_Starter.data,
      qt_meta_data_HW4_Starter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HW4_Starter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HW4_Starter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HW4_Starter.stringdata0))
        return static_cast<void*>(const_cast< HW4_Starter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int HW4_Starter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void HW4_Starter::sendPixmap(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HW4_Starter::sendQString(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
