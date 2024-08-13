/****************************************************************************
** Meta object code from reading C++ file 'unitywidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../unitywidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unitywidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UnityWidget_t {
    QByteArrayData data[18];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnityWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnityWidget_t qt_meta_stringdata_UnityWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "UnityWidget"
QT_MOC_LITERAL(1, 12, 9), // "changeVal"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "direction"
QT_MOC_LITERAL(4, 33, 9), // "isconnect"
QT_MOC_LITERAL(5, 43, 10), // "savetofile"
QT_MOC_LITERAL(6, 54, 7), // "canISet"
QT_MOC_LITERAL(7, 62, 7), // "canIOff"
QT_MOC_LITERAL(8, 70, 7), // "dirSend"
QT_MOC_LITERAL(9, 78, 10), // "clearcolor"
QT_MOC_LITERAL(10, 89, 11), // "stopSending"
QT_MOC_LITERAL(11, 101, 7), // "sendval"
QT_MOC_LITERAL(12, 109, 7), // "command"
QT_MOC_LITERAL(13, 117, 10), // "sendvalues"
QT_MOC_LITERAL(14, 128, 11), // "colorcomand"
QT_MOC_LITERAL(15, 140, 8), // "pyspeech"
QT_MOC_LITERAL(16, 149, 10), // "writeinlog"
QT_MOC_LITERAL(17, 160, 4) // "File"

    },
    "UnityWidget\0changeVal\0\0direction\0"
    "isconnect\0savetofile\0canISet\0canIOff\0"
    "dirSend\0clearcolor\0stopSending\0sendval\0"
    "command\0sendvalues\0colorcomand\0pyspeech\0"
    "writeinlog\0File"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnityWidget[] = {

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
       1,    1,   79,    2, 0x0a /* Public */,
       4,    0,   82,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    0,   86,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    0,   89,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      13,    0,   94,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    1,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::QString,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void UnityWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnityWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeVal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: { int _r = _t->isconnect();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->savetofile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { int _r = _t->canISet();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->canIOff();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->dirSend(); break;
        case 6: _t->clearcolor(); break;
        case 7: _t->stopSending(); break;
        case 8: _t->sendval((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: { QString _r = _t->sendvalues();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->colorcomand(); break;
        case 11: { QString _r = _t->pyspeech();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->writeinlog((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UnityWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_UnityWidget.data,
    qt_meta_data_UnityWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UnityWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnityWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnityWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UnityWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
