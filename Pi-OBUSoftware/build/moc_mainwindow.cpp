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
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x08,
      38,   23,   23,   23, 0x08,
      60,   23,   23,   23, 0x08,
      82,   23,   23,   23, 0x08,
      99,   23,   23,   23, 0x08,
     122,   23,   23,   23, 0x08,
     146,  167,   23,   23, 0x08,
     169,   23,   23,   23, 0x08,
     196,   23,   23,   23, 0x08,
     215,   23,   23,   23, 0x08,
     229,   23,   23,   23, 0x08,
     246,  167,   23,   23, 0x08,
     270,   23,   23,   23, 0x08,
     295,   23,   23,   23, 0x08,
     321,   23,   23,   23, 0x08,
     349,   23,   23,   23, 0x08,
     375,   23,   23,   23, 0x08,
     397,   23,   23,   23, 0x08,
     420,   23,   23,   23, 0x08,
     443,   23,   23,   23, 0x08,
     467,   23,   23,   23, 0x08,
     491,   23,   23,   23, 0x08,
     509,   23,   23,   23, 0x08,
     525,   23,   23,   23, 0x08,
     537,   23,   23,   23, 0x08,
     549,   23,   23,   23, 0x08,
     561,   23,   23,   23, 0x08,
     576,   23,   23,   23, 0x08,
     594,   23,   23,   23, 0x08,
     618,   23,   23,   23, 0x08,
     636,   23,   23,   23, 0x08,
     654,   23,   23,   23, 0x08,
     669,   23,   23,   23, 0x08,
     690,   23,   23,   23, 0x08,
     711,   23,   23,   23, 0x08,
     723,   23,   23,   23, 0x08,
     734,   23,   23,   23, 0x08,
     748,   23,   23,   23, 0x08,
     765,  798,   23,   23, 0x08,
     801,  167,   23,   23, 0x08,
     825,  798,   23,   23, 0x08,
     860,   23,   23,   23, 0x08,
     878,  167,   23,   23, 0x08,
     910,   23,   23,   23, 0x08,
     923,   23,   23,   23, 0x08,
     939,  798,   23,   23, 0x08,
     969,   23,   23,   23, 0x08,
     979,  167,   23,   23, 0x08,
     999,   23,   23,   23, 0x08,
    1010,   23,   23,   23, 0x08,
    1038,   23,   23,   23, 0x08,
    1069,   23,   23,   23, 0x08,

 // methods: signature, parameters, type, tag, flags
    1094,  167,   23,   23, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0readySend()\0\0onCommandLR()\0"
    "on_btnPrint_clicked()\0on_btnClear_clicked()\0"
    "Send_Broadcast()\0autoTakePhoto(QString)\0"
    "on_pushButton_clicked()\0sendCommand(int,int)\0"
    ",\0onOpenCloseButtonClicked()\0"
    "onGpsData(QString)\0initMap(bool)\0"
    "initListSensor()\0onNodeJoin(int,QString)\0"
    "onImageReceived(QString)\0"
    "onTranceiverData(QString)\0"
    "onTranceiverDataLI(QString)\0"
    "onreceivedDataLR(QString)\0"
    "onTempAndHum(QString)\0onTempAndHum1(QString)\0"
    "oncompleteLux(QString)\0onTempAndHumLR(QString)\0"
    "oncompleteMois(QString)\0onGpsStatus(bool)\0"
    "startLinphone()\0ShowAbout()\0RetaskOne()\0"
    "RetaskAll()\0AddNewSensor()\0EditSensorPlace()\0"
    "ShowSensorInformation()\0StartupLocation()\0"
    "SetupSerialPort()\0SendToServer()\0"
    "on_btnExit_clicked()\0on_btnView_clicked()\0"
    "sendtoWeb()\0sendMqtt()\0mqttConnect()\0"
    "connectEnabled()\0sendMqttTandH(int,double,double)\0"
    ",,\0sendMqttLux(int,double)\0"
    "sendMqttTandHLR(int,double,double)\0"
    "sendMqttMois(int)\0sendImageToWeb(QString,QString)\0"
    "GetDataWeb()\0sendBroadcast()\0"
    "onTempHumi(int,double,double)\0onLR(int)\0"
    "onLux_t(int,double)\0makePlot()\0"
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
        case 16: _t->onreceivedDataLR((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->onTempAndHum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->onTempAndHum1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->oncompleteLux((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 20: _t->onTempAndHumLR((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->oncompleteMois((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 22: _t->onGpsStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->startLinphone(); break;
        case 24: _t->ShowAbout(); break;
        case 25: _t->RetaskOne(); break;
        case 26: _t->RetaskAll(); break;
        case 27: _t->AddNewSensor(); break;
        case 28: _t->EditSensorPlace(); break;
        case 29: _t->ShowSensorInformation(); break;
        case 30: _t->StartupLocation(); break;
        case 31: _t->SetupSerialPort(); break;
        case 32: _t->SendToServer(); break;
        case 33: _t->on_btnExit_clicked(); break;
        case 34: _t->on_btnView_clicked(); break;
        case 35: _t->sendtoWeb(); break;
        case 36: _t->sendMqtt(); break;
        case 37: _t->mqttConnect(); break;
        case 38: _t->connectEnabled(); break;
        case 39: _t->sendMqttTandH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 40: _t->sendMqttLux((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 41: _t->sendMqttTandHLR((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 42: _t->sendMqttMois((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->sendImageToWeb((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 44: _t->GetDataWeb(); break;
        case 45: _t->sendBroadcast(); break;
        case 46: _t->onTempHumi((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 47: _t->onLR((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->onLux_t((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 49: _t->makePlot(); break;
        case 50: _t->WriteDatatoLogfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->on_btnConfigThreshol_clicked(); break;
        case 52: _t->on_btnSendLora_clicked(); break;
        case 53: _t->mySendCommand((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
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
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::readySend()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
