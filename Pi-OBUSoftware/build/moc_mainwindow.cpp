/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Terminal1/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x08,
      38,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      82,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
     148,  146,   11,   11, 0x08,
     169,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     215,   11,   11,   11, 0x08,
     229,   11,   11,   11, 0x08,
     246,  146,   11,   11, 0x08,
     270,   11,   11,   11, 0x08,
     295,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     349,   11,   11,   11, 0x08,
     371,   11,   11,   11, 0x08,
     394,   11,   11,   11, 0x08,
     417,   11,   11,   11, 0x08,
     441,   11,   11,   11, 0x08,
     459,   11,   11,   11, 0x08,
     475,   11,   11,   11, 0x08,
     487,   11,   11,   11, 0x08,
     499,   11,   11,   11, 0x08,
     511,   11,   11,   11, 0x08,
     526,   11,   11,   11, 0x08,
     544,   11,   11,   11, 0x08,
     568,   11,   11,   11, 0x08,
     586,   11,   11,   11, 0x08,
     604,   11,   11,   11, 0x08,
     619,   11,   11,   11, 0x08,
     640,   11,   11,   11, 0x08,
     661,   11,   11,   11, 0x08,
     673,   11,   11,   11, 0x08,
     684,   11,   11,   11, 0x08,
     698,   11,   11,   11, 0x08,
     718,  715,   11,   11, 0x08,
     751,  146,   11,   11, 0x08,
     775,  715,   11,   11, 0x08,
     810,  146,   11,   11, 0x08,
     842,   11,   11,   11, 0x08,
     855,   11,   11,   11, 0x08,
     871,  715,   11,   11, 0x08,
     901,   11,   11,   11, 0x08,
     911,   11,   11,   11, 0x08,
     918,  146,   11,   11, 0x08,
     938,   11,   11,   11, 0x08,
     949,   11,   11,   11, 0x08,
     977,   11,   11,   11, 0x08,
    1008,   11,   11,   11, 0x08,

 // methods: signature, parameters, type, tag, flags
    1033,  146,   11,   11, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0readySend()\0onCommandLR()\0"
    "on_btnPrint_clicked()\0on_btnClear_clicked()\0"
    "Send_Broadcast()\0autoTakePhoto(QString)\0"
    "on_pushButton_clicked()\0,\0"
    "sendCommand(int,int)\0onOpenCloseButtonClicked()\0"
    "onGpsData(QString)\0initMap(bool)\0"
    "initListSensor()\0onNodeJoin(int,QString)\0"
    "onImageReceived(QString)\0"
    "onTranceiverData(QString)\0"
    "onTranceiverDataLI(QString)\0"
    "onTempAndHum(QString)\0onTempAndHum1(QString)\0"
    "oncompleteLux(QString)\0onTempAndHumLR(QString)\0"
    "onGpsStatus(bool)\0startLinphone()\0"
    "ShowAbout()\0RetaskOne()\0RetaskAll()\0"
    "AddNewSensor()\0EditSensorPlace()\0"
    "ShowSensorInformation()\0StartupLocation()\0"
    "SetupSerialPort()\0SendToServer()\0"
    "on_btnExit_clicked()\0on_btnView_clicked()\0"
    "sendtoWeb()\0sendMqtt()\0mqttConnect()\0"
    "connectEnabled()\0,,\0"
    "sendMqttTandH(int,double,double)\0"
    "sendMqttLux(int,double)\0"
    "sendMqttTandHLR(int,double,double)\0"
    "sendImageToWeb(QString,QString)\0"
    "GetDataWeb()\0sendBroadcast()\0"
    "onTempHumi(int,double,double)\0onLR(int)\0"
    "test()\0onLux_t(int,double)\0makePlot()\0"
    "WriteDatatoLogfile(QString)\0"
    "on_btnConfigThreshol_clicked()\0"
    "on_btnSendLora_clicked()\0"
    "mySendCommand(int,int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->readySend(); break;
        case 1: _t->onCommandLR(); break;
        case 2: _t->on_btnPrint_clicked(); break;
        case 3: _t->on_btnClear_clicked(); break;
        case 4: _t->Send_Broadcast(); break;
        case 5: _t->autoTakePhoto((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->sendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->onOpenCloseButtonClicked(); break;
        case 9: _t->onGpsData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->initMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->initListSensor(); break;
        case 12: _t->onNodeJoin((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 13: _t->onImageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->onTranceiverData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->onTranceiverDataLI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->onTempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->onTempAndHum1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->oncompleteLux((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->onTempAndHumLR((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->onGpsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->startLinphone(); break;
        case 22: _t->ShowAbout(); break;
        case 23: _t->RetaskOne(); break;
        case 24: _t->RetaskAll(); break;
        case 25: _t->AddNewSensor(); break;
        case 26: _t->EditSensorPlace(); break;
        case 27: _t->ShowSensorInformation(); break;
        case 28: _t->StartupLocation(); break;
        case 29: _t->SetupSerialPort(); break;
        case 30: _t->SendToServer(); break;
        case 31: _t->on_btnExit_clicked(); break;
        case 32: _t->on_btnView_clicked(); break;
        case 33: _t->sendtoWeb(); break;
        case 34: _t->sendMqtt(); break;
        case 35: _t->mqttConnect(); break;
        case 36: _t->connectEnabled(); break;
        case 37: _t->sendMqttTandH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 38: _t->sendMqttLux((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 39: _t->sendMqttTandHLR((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 40: _t->sendImageToWeb((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 41: _t->GetDataWeb(); break;
        case 42: _t->sendBroadcast(); break;
        case 43: _t->onTempHumi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 44: _t->onLR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->test(); break;
        case 46: _t->onLux_t((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 47: _t->makePlot(); break;
        case 48: _t->WriteDatatoLogfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->on_btnConfigThreshol_clicked(); break;
        case 50: _t->on_btnSendLora_clicked(); break;
        case 51: _t->mySendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::readySend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
