/****************************************************************************
** Meta object code from reading C++ file 'builtindialog.h'
**
** Created: Thu Dec 29 09:33:52 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "builtindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'builtindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BuiltInDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      26,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,
      49,   14,   14,   14, 0x08,
      61,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BuiltInDialog[] = {
    "BuiltInDialog\0\0slotFile()\0slotColor()\0"
    "slotFont()\0slotInput()\0slotProgress()\0"
};

const QMetaObject BuiltInDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BuiltInDialog,
      qt_meta_data_BuiltInDialog, 0 }
};

const QMetaObject *BuiltInDialog::metaObject() const
{
    return &staticMetaObject;
}

void *BuiltInDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BuiltInDialog))
        return static_cast<void*>(const_cast< BuiltInDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int BuiltInDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotFile(); break;
        case 1: slotColor(); break;
        case 2: slotFont(); break;
        case 3: slotInput(); break;
        case 4: slotProgress(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
