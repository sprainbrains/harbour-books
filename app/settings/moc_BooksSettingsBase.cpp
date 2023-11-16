/****************************************************************************
** Meta object code from reading C++ file 'BooksSettingsBase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/BooksSettingsBase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BooksSettingsBase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BooksSettingsBase_t {
    QByteArrayData data[23];
    char stringdata0[408];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BooksSettingsBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BooksSettingsBase_t qt_meta_stringdata_BooksSettingsBase = {
    {
QT_MOC_LITERAL(0, 0, 17), // "BooksSettingsBase"
QT_MOC_LITERAL(1, 18, 12), // "themeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "darkOnLightChanged"
QT_MOC_LITERAL(4, 51, 16), // "nightModeChanged"
QT_MOC_LITERAL(5, 68, 18), // "colorSchemeChanged"
QT_MOC_LITERAL(6, 87, 24), // "customColorSchemeChanged"
QT_MOC_LITERAL(7, 112, 27), // "useCustomColorSchemeChanged"
QT_MOC_LITERAL(8, 140, 22), // "availableColorsChanged"
QT_MOC_LITERAL(9, 163, 5), // "theme"
QT_MOC_LITERAL(10, 169, 11), // "darkOnLight"
QT_MOC_LITERAL(11, 181, 9), // "nightMode"
QT_MOC_LITERAL(12, 191, 19), // "pageBackgroundColor"
QT_MOC_LITERAL(13, 211, 27), // "invertedPageBackgroundColor"
QT_MOC_LITERAL(14, 239, 20), // "primaryPageToolColor"
QT_MOC_LITERAL(15, 260, 22), // "highlightPageToolColor"
QT_MOC_LITERAL(16, 283, 11), // "colorScheme"
QT_MOC_LITERAL(17, 295, 16), // "BooksColorScheme"
QT_MOC_LITERAL(18, 312, 17), // "customColorScheme"
QT_MOC_LITERAL(19, 330, 26), // "customNightModeColorScheme"
QT_MOC_LITERAL(20, 357, 20), // "useCustomColorScheme"
QT_MOC_LITERAL(21, 378, 13), // "defaultColors"
QT_MOC_LITERAL(22, 392, 15) // "availableColors"

    },
    "BooksSettingsBase\0themeChanged\0\0"
    "darkOnLightChanged\0nightModeChanged\0"
    "colorSchemeChanged\0customColorSchemeChanged\0"
    "useCustomColorSchemeChanged\0"
    "availableColorsChanged\0theme\0darkOnLight\0"
    "nightMode\0pageBackgroundColor\0"
    "invertedPageBackgroundColor\0"
    "primaryPageToolColor\0highlightPageToolColor\0"
    "colorScheme\0BooksColorScheme\0"
    "customColorScheme\0customNightModeColorScheme\0"
    "useCustomColorScheme\0defaultColors\0"
    "availableColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BooksSettingsBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      13,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QObjectStar, 0x00495103,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::QColor, 0x00495001,
      13, QMetaType::QColor, 0x00495001,
      14, QMetaType::QColor, 0x00495001,
      15, QMetaType::QColor, 0x00495001,
      16, 0x80000000 | 17, 0x00495009,
      18, 0x80000000 | 17, 0x0049510b,
      19, 0x80000000 | 17, 0x00495009,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::QStringList, 0x00095401,
      22, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       3,
       3,
       3,
       3,
       4,
       4,
       5,
       0,
       6,

       0        // eod
};

void BooksSettingsBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BooksSettingsBase *_t = static_cast<BooksSettingsBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->themeChanged(); break;
        case 1: _t->darkOnLightChanged(); break;
        case 2: _t->nightModeChanged(); break;
        case 3: _t->colorSchemeChanged(); break;
        case 4: _t->customColorSchemeChanged(); break;
        case 5: _t->useCustomColorSchemeChanged(); break;
        case 6: _t->availableColorsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::themeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::darkOnLightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::nightModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::colorSchemeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::customColorSchemeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::useCustomColorSchemeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (BooksSettingsBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BooksSettingsBase::availableColorsChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
        case 8:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BooksColorScheme >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BooksSettingsBase *_t = static_cast<BooksSettingsBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->theme(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->darkOnLight(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->nightMode(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->pageBackgroundColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->invertedPageBackgroundColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->primaryPageToolColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->highlightPageToolColor(); break;
        case 7: *reinterpret_cast< BooksColorScheme*>(_v) = _t->colorScheme(); break;
        case 8: *reinterpret_cast< BooksColorScheme*>(_v) = _t->customColorScheme(); break;
        case 9: *reinterpret_cast< BooksColorScheme*>(_v) = _t->customNightModeColorScheme(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->useCustomColorScheme(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _t->defaultColors(); break;
        case 12: *reinterpret_cast< QStringList*>(_v) = _t->availableColors(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BooksSettingsBase *_t = static_cast<BooksSettingsBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTheme(*reinterpret_cast< QObject**>(_v)); break;
        case 2: _t->setNightMode(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setCustomColorScheme(*reinterpret_cast< BooksColorScheme*>(_v)); break;
        case 10: _t->setUseCustomColorScheme(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setAvailableColors(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BooksSettingsBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BooksSettingsBase.data,
      qt_meta_data_BooksSettingsBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BooksSettingsBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BooksSettingsBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BooksSettingsBase.stringdata0))
        return static_cast<void*>(const_cast< BooksSettingsBase*>(this));
    return QObject::qt_metacast(_clname);
}

int BooksSettingsBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BooksSettingsBase::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void BooksSettingsBase::darkOnLightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void BooksSettingsBase::nightModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BooksSettingsBase::colorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void BooksSettingsBase::customColorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void BooksSettingsBase::useCustomColorSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void BooksSettingsBase::availableColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
