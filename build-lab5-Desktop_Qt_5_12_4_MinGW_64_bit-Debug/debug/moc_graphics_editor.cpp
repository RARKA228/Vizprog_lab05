/****************************************************************************
** Meta object code from reading C++ file 'graphics_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../lab5/graphics_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphics_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GraphicsEditorWindow_t {
    QByteArrayData data[15];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphicsEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphicsEditorWindow_t qt_meta_stringdata_GraphicsEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GraphicsEditorWindow"
QT_MOC_LITERAL(1, 21, 9), // "addCircle"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "addRectangle"
QT_MOC_LITERAL(4, 45, 11), // "addTriangle"
QT_MOC_LITERAL(5, 57, 7), // "addLine"
QT_MOC_LITERAL(6, 65, 9), // "saveImage"
QT_MOC_LITERAL(7, 75, 11), // "importImage"
QT_MOC_LITERAL(8, 87, 12), // "setBrushSize"
QT_MOC_LITERAL(9, 100, 13), // "setBrushColor"
QT_MOC_LITERAL(10, 114, 9), // "setEraser"
QT_MOC_LITERAL(11, 124, 21), // "changeBackgroundColor"
QT_MOC_LITERAL(12, 146, 13), // "setBrushStyle"
QT_MOC_LITERAL(13, 160, 18), // "deleteSelectedItem"
QT_MOC_LITERAL(14, 179, 7) // "addText"

    },
    "GraphicsEditorWindow\0addCircle\0\0"
    "addRectangle\0addTriangle\0addLine\0"
    "saveImage\0importImage\0setBrushSize\0"
    "setBrushColor\0setEraser\0changeBackgroundColor\0"
    "setBrushStyle\0deleteSelectedItem\0"
    "addText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphicsEditorWindow[] = {

 // content:
       8,       // revision
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
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GraphicsEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GraphicsEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addCircle(); break;
        case 1: _t->addRectangle(); break;
        case 2: _t->addTriangle(); break;
        case 3: _t->addLine(); break;
        case 4: _t->saveImage(); break;
        case 5: _t->importImage(); break;
        case 6: _t->setBrushSize(); break;
        case 7: _t->setBrushColor(); break;
        case 8: _t->setEraser(); break;
        case 9: _t->changeBackgroundColor(); break;
        case 10: _t->setBrushStyle(); break;
        case 11: _t->deleteSelectedItem(); break;
        case 12: _t->addText(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GraphicsEditorWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_GraphicsEditorWindow.data,
    qt_meta_data_GraphicsEditorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GraphicsEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphicsEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GraphicsEditorWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GraphicsEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
