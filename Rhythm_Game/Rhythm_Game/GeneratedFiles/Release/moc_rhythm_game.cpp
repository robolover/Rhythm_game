/****************************************************************************
** Meta object code from reading C++ file 'rhythm_game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../rhythm_game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rhythm_game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Rhythm_Game_t {
    QByteArrayData data[18];
    char stringdata[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rhythm_Game_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rhythm_Game_t qt_meta_stringdata_Rhythm_Game = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 13),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 11),
QT_MOC_LITERAL(4, 39, 9),
QT_MOC_LITERAL(5, 49, 17),
QT_MOC_LITERAL(6, 67, 19),
QT_MOC_LITERAL(7, 87, 10),
QT_MOC_LITERAL(8, 98, 9),
QT_MOC_LITERAL(9, 108, 6),
QT_MOC_LITERAL(10, 115, 14),
QT_MOC_LITERAL(11, 130, 13),
QT_MOC_LITERAL(12, 144, 15),
QT_MOC_LITERAL(13, 160, 5),
QT_MOC_LITERAL(14, 166, 3),
QT_MOC_LITERAL(15, 170, 3),
QT_MOC_LITERAL(16, 174, 4),
QT_MOC_LITERAL(17, 179, 11)
    },
    "Rhythm_Game\0update_camera\0\0enter_stage\0"
    "exit_game\0change_next_stage\0"
    "change_before_stage\0play_video\0play_game\0"
    "result\0video_function\0play_function\0"
    "answer_function\0apple\0bus\0cat\0duck\0"
    "finish_game"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rhythm_Game[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    0,   95,    2, 0x08 /* Private */,
       4,    0,   96,    2, 0x08 /* Private */,
       5,    0,   97,    2, 0x08 /* Private */,
       6,    0,   98,    2, 0x08 /* Private */,
       7,    0,   99,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Rhythm_Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Rhythm_Game *_t = static_cast<Rhythm_Game *>(_o);
        switch (_id) {
        case 0: _t->update_camera(); break;
        case 1: _t->enter_stage(); break;
        case 2: _t->exit_game(); break;
        case 3: _t->change_next_stage(); break;
        case 4: _t->change_before_stage(); break;
        case 5: _t->play_video(); break;
        case 6: _t->play_game(); break;
        case 7: _t->result(); break;
        case 8: _t->video_function(); break;
        case 9: _t->play_function(); break;
        case 10: _t->answer_function(); break;
        case 11: _t->apple(); break;
        case 12: _t->bus(); break;
        case 13: _t->cat(); break;
        case 14: _t->duck(); break;
        case 15: _t->finish_game(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Rhythm_Game::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Rhythm_Game.data,
      qt_meta_data_Rhythm_Game,  qt_static_metacall, 0, 0}
};


const QMetaObject *Rhythm_Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rhythm_Game::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Rhythm_Game.stringdata))
        return static_cast<void*>(const_cast< Rhythm_Game*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Rhythm_Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
