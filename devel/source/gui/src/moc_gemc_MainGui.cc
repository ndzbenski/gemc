/****************************************************************************
** Meta object code from reading C++ file 'gemc_MainGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gemc_MainGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gemc_MainGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gemcMainWidget_t {
    QByteArrayData data[11];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gemcMainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gemcMainWidget_t qt_meta_stringdata_gemcMainWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "gemcMainWidget"
QT_MOC_LITERAL(1, 15, 10), // "changePage"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 44, 7), // "current"
QT_MOC_LITERAL(5, 52, 8), // "previous"
QT_MOC_LITERAL(6, 61, 17), // "change_background"
QT_MOC_LITERAL(7, 79, 9), // "gemc_quit"
QT_MOC_LITERAL(8, 89, 8), // "stopBeam"
QT_MOC_LITERAL(9, 98, 6), // "beamOn"
QT_MOC_LITERAL(10, 105, 11) // "beamOnCycle"

    },
    "gemcMainWidget\0changePage\0\0QListWidgetItem*\0"
    "current\0previous\0change_background\0"
    "gemc_quit\0stopBeam\0beamOn\0beamOnCycle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gemcMainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x0a /* Public */,
       6,    1,   49,    2, 0x0a /* Public */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,
       9,    0,   54,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gemcMainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gemcMainWidget *_t = static_cast<gemcMainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->change_background((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->gemc_quit(); break;
        case 3: _t->stopBeam(); break;
        case 4: _t->beamOn(); break;
        case 5: _t->beamOnCycle(); break;
        default: ;
        }
    }
}

const QMetaObject gemcMainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_gemcMainWidget.data,
      qt_meta_data_gemcMainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *gemcMainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gemcMainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gemcMainWidget.stringdata0))
        return static_cast<void*>(const_cast< gemcMainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int gemcMainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
