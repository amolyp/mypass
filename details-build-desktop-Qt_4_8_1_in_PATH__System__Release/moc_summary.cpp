/****************************************************************************
** Meta object code from reading C++ file 'summary.h'
**
** Created: Mon Nov 9 15:55:30 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../details/summary.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'summary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Summary[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      30,    8,    8,    8, 0x08,
      53,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Summary[] = {
    "Summary\0\0on_pbLogin_clicked()\0"
    "on_pbAddData_clicked()\0on_pbViewData_clicked()\0"
};

void Summary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Summary *_t = static_cast<Summary *>(_o);
        switch (_id) {
        case 0: _t->on_pbLogin_clicked(); break;
        case 1: _t->on_pbAddData_clicked(); break;
        case 2: _t->on_pbViewData_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Summary::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Summary::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Summary,
      qt_meta_data_Summary, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Summary::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Summary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Summary::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Summary))
        return static_cast<void*>(const_cast< Summary*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Summary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
