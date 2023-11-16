/****************************************************************************
** Meta object code from reading C++ file 'HarbourColorEditorModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../harbour-lib/include/HarbourColorEditorModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HarbourColorEditorModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HarbourColorEditorModel_t {
    QByteArrayData data[13];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HarbourColorEditorModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HarbourColorEditorModel_t qt_meta_stringdata_HarbourColorEditorModel = {
    {
QT_MOC_LITERAL(0, 0, 23), // "HarbourColorEditorModel"
QT_MOC_LITERAL(1, 24, 13), // "colorsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "dragPosChanged"
QT_MOC_LITERAL(4, 54, 8), // "addColor"
QT_MOC_LITERAL(5, 63, 6), // "aColor"
QT_MOC_LITERAL(6, 70, 7), // "indexOf"
QT_MOC_LITERAL(7, 78, 6), // "colors"
QT_MOC_LITERAL(8, 85, 7), // "dragPos"
QT_MOC_LITERAL(9, 93, 8), // "ItemType"
QT_MOC_LITERAL(10, 102, 9), // "ColorItem"
QT_MOC_LITERAL(11, 112, 11), // "TrashedItem"
QT_MOC_LITERAL(12, 124, 7) // "AddItem"

    },
    "HarbourColorEditorModel\0colorsChanged\0"
    "\0dragPosChanged\0addColor\0aColor\0indexOf\0"
    "colors\0dragPos\0ItemType\0ColorItem\0"
    "TrashedItem\0AddItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HarbourColorEditorModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x02 /* Public */,
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Int, QMetaType::QColor,    5,

 // properties: name, type, flags
       7, QMetaType::QStringList, 0x00495103,
       8, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       9, 0x0,    3,   54,

 // enum data: key, value
      10, uint(HarbourColorEditorModel::ColorItem),
      11, uint(HarbourColorEditorModel::TrashedItem),
      12, uint(HarbourColorEditorModel::AddItem),

       0        // eod
};

void HarbourColorEditorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HarbourColorEditorModel *_t = static_cast<HarbourColorEditorModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorsChanged(); break;
        case 1: _t->dragPosChanged(); break;
        case 2: _t->addColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: { int _r = _t->indexOf((*reinterpret_cast< QColor(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HarbourColorEditorModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HarbourColorEditorModel::colorsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HarbourColorEditorModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HarbourColorEditorModel::dragPosChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HarbourColorEditorModel *_t = static_cast<HarbourColorEditorModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->getColors(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getDragPos(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HarbourColorEditorModel *_t = static_cast<HarbourColorEditorModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColors(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setDragPos(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject HarbourColorEditorModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_HarbourColorEditorModel.data,
      qt_meta_data_HarbourColorEditorModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HarbourColorEditorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HarbourColorEditorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HarbourColorEditorModel.stringdata0))
        return static_cast<void*>(const_cast< HarbourColorEditorModel*>(this));
    return QAbstractListModel::qt_metacast(_clname);
}

int HarbourColorEditorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void HarbourColorEditorModel::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HarbourColorEditorModel::dragPosChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
