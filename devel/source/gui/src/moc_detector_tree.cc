/****************************************************************************
** Meta object code from reading C++ file 'detector_tree.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "detector_tree.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detector_tree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_detector_tree_t {
    QByteArrayData data[16];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_detector_tree_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_detector_tree_t qt_meta_stringdata_detector_tree = {
    {
QT_MOC_LITERAL(0, 0, 13), // "detector_tree"
QT_MOC_LITERAL(1, 14, 17), // "switch_visibility"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 27), // "switch_visibility_daughters"
QT_MOC_LITERAL(4, 61, 16), // "switch_wiresolid"
QT_MOC_LITERAL(5, 78, 12), // "switch_color"
QT_MOC_LITERAL(6, 91, 13), // "show_detector"
QT_MOC_LITERAL(7, 105, 15), // "write_gdml_file"
QT_MOC_LITERAL(8, 121, 6), // "string"
QT_MOC_LITERAL(9, 128, 13), // "set_gdml_name"
QT_MOC_LITERAL(10, 142, 16), // "set_gdml_nameAll"
QT_MOC_LITERAL(11, 159, 14), // "write_wrl_file"
QT_MOC_LITERAL(12, 174, 12), // "set_wrl_name"
QT_MOC_LITERAL(13, 187, 15), // "set_wrl_nameAll"
QT_MOC_LITERAL(14, 203, 15), // "inspectDetector"
QT_MOC_LITERAL(15, 219, 16) // "change_placement"

    },
    "detector_tree\0switch_visibility\0\0"
    "switch_visibility_daughters\0"
    "switch_wiresolid\0switch_color\0"
    "show_detector\0write_gdml_file\0string\0"
    "set_gdml_name\0set_gdml_nameAll\0"
    "write_wrl_file\0set_wrl_name\0set_wrl_nameAll\0"
    "inspectDetector\0change_placement"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_detector_tree[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    1,   84,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    0,   94,    2, 0x08 /* Private */,
      15,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void detector_tree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        detector_tree *_t = static_cast<detector_tree *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switch_visibility(); break;
        case 1: _t->switch_visibility_daughters(); break;
        case 2: _t->switch_wiresolid(); break;
        case 3: _t->switch_color(); break;
        case 4: _t->show_detector(); break;
        case 5: _t->write_gdml_file((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 6: _t->set_gdml_name(); break;
        case 7: _t->set_gdml_nameAll(); break;
        case 8: _t->write_wrl_file((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 9: _t->set_wrl_name(); break;
        case 10: _t->set_wrl_nameAll(); break;
        case 11: _t->inspectDetector(); break;
        case 12: _t->change_placement(); break;
        default: ;
        }
    }
}

const QMetaObject detector_tree::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_detector_tree.data,
      qt_meta_data_detector_tree,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *detector_tree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *detector_tree::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_detector_tree.stringdata0))
        return static_cast<void*>(const_cast< detector_tree*>(this));
    return QWidget::qt_metacast(_clname);
}

int detector_tree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
