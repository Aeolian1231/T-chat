/****************************************************************************
** Meta object code from reading C++ file 'registdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../registdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSregistENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSregistENDCLASS = QtMocHelpers::stringData(
    "regist",
    "switchLogin",
    "",
    "on_getcode_Button_clicked",
    "on_confirm_Button_clicked",
    "slot_reg_mod_finish",
    "ReqId",
    "id",
    "res",
    "ErrorCodes",
    "err"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSregistENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[7];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[26];
    char stringdata5[20];
    char stringdata6[6];
    char stringdata7[3];
    char stringdata8[4];
    char stringdata9[11];
    char stringdata10[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSregistENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSregistENDCLASS_t qt_meta_stringdata_CLASSregistENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "regist"
        QT_MOC_LITERAL(7, 11),  // "switchLogin"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 25),  // "on_getcode_Button_clicked"
        QT_MOC_LITERAL(46, 25),  // "on_confirm_Button_clicked"
        QT_MOC_LITERAL(72, 19),  // "slot_reg_mod_finish"
        QT_MOC_LITERAL(92, 5),  // "ReqId"
        QT_MOC_LITERAL(98, 2),  // "id"
        QT_MOC_LITERAL(101, 3),  // "res"
        QT_MOC_LITERAL(105, 10),  // "ErrorCodes"
        QT_MOC_LITERAL(116, 3)   // "err"
    },
    "regist",
    "switchLogin",
    "",
    "on_getcode_Button_clicked",
    "on_confirm_Button_clicked",
    "slot_reg_mod_finish",
    "ReqId",
    "id",
    "res",
    "ErrorCodes",
    "err"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSregistENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    3,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, 0x80000000 | 9,    7,    8,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject regist::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSregistENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSregistENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSregistENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<regist, std::true_type>,
        // method 'switchLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_getcode_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_Button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_reg_mod_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ReqId, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<ErrorCodes, std::false_type>
    >,
    nullptr
} };

void regist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<regist *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->switchLogin(); break;
        case 1: _t->on_getcode_Button_clicked(); break;
        case 2: _t->on_confirm_Button_clicked(); break;
        case 3: _t->slot_reg_mod_finish((*reinterpret_cast< std::add_pointer_t<ReqId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ErrorCodes>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (regist::*)();
            if (_t _q_method = &regist::switchLogin; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *regist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *regist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSregistENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int regist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void regist::switchLogin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
