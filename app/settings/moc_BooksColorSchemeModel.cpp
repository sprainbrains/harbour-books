/****************************************************************************
** Meta object code from reading C++ file 'BooksColorSchemeModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/BooksColorSchemeModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BooksColorSchemeModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BooksColorSchemeModel_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BooksColorSchemeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BooksColorSchemeModel_t qt_meta_stringdata_BooksColorSchemeModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "BooksColorSchemeModel"
QT_MOC_LITERAL(1, 22, 18), // "colorSchemeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 11), // "colorScheme"
QT_MOC_LITERAL(4, 54, 16) // "BooksColorScheme"

    },
    "BooksColorSchemeModel\0colorSchemeChanged\0"
    "\0colorScheme\0BooksColorScheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BooksColorSchemeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void BooksColorSchemeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BooksColorSchemeModel *_t = static_cast<BooksColorSchemeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorSchemeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BooksColorSchemeModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksColorSchemeModel::colorSchemeChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BooksColorScheme >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BooksColorSchemeModel *_t = static_cast<BooksColorSchemeModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< BooksColorScheme*>(_v) = _t->colorScheme(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BooksColorSchemeModel *_t = static_cast<BooksColorSchemeModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColorScheme(*reinterpret_cast< BooksColorScheme*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BooksColorSchemeModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_BooksColorSchemeModel.data,
      qt_meta_data_BooksColorSchemeModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BooksColorSchemeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BooksColorSchemeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BooksColorSchemeModel.stringdata0))
        return static_cast<void*>(const_cast< BooksColorSchemeModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int BooksColorSchemeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BooksColorSchemeModel::colorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
