/****************************************************************************
** Meta object code from reading C++ file 'viewdata.h'
**
** Created: Mon Nov 9 15:55:32 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../details/viewdata.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'viewdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewData[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      34,    9,    9,    9, 0x08,
      64,   56,    9,    9, 0x08,
      84,    9,    9,    9, 0x08,
     111,    9,    9,    9, 0x08,
     121,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ViewData[] = {
    "ViewData\0\0on_tbViewData_clicked()\0"
    "on_tbSearch_clicked()\0row,col\0"
    "cellSelect(int,int)\0on_tbUpdateIssue_clicked()\0"
    "refresh()\0on_tbClear_clicked()\0"
};

void ViewData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ViewData *_t = static_cast<ViewData *>(_o);
        switch (_id) {
        case 0: _t->on_tbViewData_clicked(); break;
        case 1: _t->on_tbSearch_clicked(); break;
        case 2: _t->cellSelect((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_tbUpdateIssue_clicked(); break;
        case 4: _t->refresh(); break;
        case 5: _t->on_tbClear_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ViewData::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ViewData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ViewData,
      qt_meta_data_ViewData, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewData::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewData::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewData))
        return static_cast<void*>(const_cast< ViewData*>(this));
    return QDialog::qt_metacast(_clname);
}

int ViewData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
