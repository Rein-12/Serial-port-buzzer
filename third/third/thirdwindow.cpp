#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QList>
#include <QDebug>

thirdWindow::thirdWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::thirdWindow)
{
    ui->setupUi(this);

    //To do user's work
    mIsOpen = false;
    ui->BtnSend->setEnabled(mIsOpen);

    //智能识别当前系统的有效串口号
    QList<QSerialPortInfo>serialPortInfo = QSerialPortInfo::availablePorts();
    int count = serialPortInfo.count();
    for(int i = 0; i < count; i++)
    {
        ui->CboxSerialport->addItem(serialPortInfo.at(i).portName());
    }

    connect(&mSerailPort,SIGNAL(readyRead()),this,SLOT(on_SerialPort_readyRead()));
}

thirdWindow::~thirdWindow()
{
    delete ui;
}

bool thirdWindow::getSerialPortConfig()
{
    //获取串口位置
    mPortName = ui->CboxSerialport->currentText();
    mBaudRate = ui->CboxBaudrate->currentText();
    mParity = ui->CboxParity->currentText();
    mDataBits = ui->CboxDataBits->currentText();
    mStopBits = ui->CboxStopBits->currentText();

    //设置串口配置
    //端口号
    mSerailPort.setPortName(mPortName);
    //波特率
    /*if("9600" == mBaudRate)
    {
        mSerailPort.setBaudRate(QSerialPort::Baud9600);
    }
    else if("19200" == mBaudRate)
    {
        mSerailPort.setBaudRate(QSerialPort::Baud19200);
    }
    else
    {
        mSerailPort.setBaudRate(QSerialPort::Baud115200);
    }*/
    switch(ui->CboxBaudrate->currentText().toInt())
    {
        case 1200:mSerailPort.setBaudRate(QSerialPort::Baud1200,QSerialPort::AllDirections);break;
        case 2400:mSerailPort.setBaudRate(QSerialPort::Baud2400,QSerialPort::AllDirections);break;
        case 4800:mSerailPort.setBaudRate(QSerialPort::Baud4800,QSerialPort::AllDirections);break;
        case 9600:mSerailPort.setBaudRate(QSerialPort::Baud9600,QSerialPort::AllDirections);break;
        case 19200:mSerailPort.setBaudRate(QSerialPort::Baud19200,QSerialPort::AllDirections);break;
        case 38400:mSerailPort.setBaudRate(QSerialPort::Baud38400,QSerialPort::AllDirections);break;
        case 57600:mSerailPort.setBaudRate(QSerialPort::Baud57600,QSerialPort::AllDirections);break;
        case 115200:mSerailPort.setBaudRate(QSerialPort::Baud115200,QSerialPort::AllDirections);break;
    }

    //校验位
    if("EVEN" == mParity)
    {
        mSerailPort.setParity(QSerialPort::EvenParity);
    }
    else if("NONE" == mParity)
    {
        mSerailPort.setParity(QSerialPort::OddParity);
    }
    else
    {
        mSerailPort.setParity(QSerialPort::NoParity);
    }

    //数据位
    /*if("5" == mDataBits)
    {
        mSerailPort.setDataBits(QSerialPort::Data5);
    }
    else if("6" == mDataBits)
    {
        mSerailPort.setDataBits(QSerialPort::Data6);
    }
    else if("7" == mDataBits)
    {
        mSerailPort.setDataBits(QSerialPort::Data7);
    }
    else
    {
        mSerailPort.setDataBits(QSerialPort::Data8);
    }*/
    switch(ui->CboxDataBits->currentText().toInt())
    {
        case 8:mSerailPort.setDataBits(QSerialPort::Data8);break;
        case 7:mSerailPort.setDataBits(QSerialPort::Data7);break;
        case 6:mSerailPort.setDataBits(QSerialPort::Data6);break;
        case 5:mSerailPort.setDataBits(QSerialPort::Data5);break;
    }

    //停止位
    /*if("1.5" == mStopBits)
    {
        mSerailPort.setStopBits(QSerialPort::OneAndHalfStop);
    }
    else if("2" == mStopBits)
    {
        mSerailPort.setStopBits(QSerialPort::TwoStop);
    }
    else
    {
        mSerailPort.setStopBits(QSerialPort::OneStop);
    }*/
    switch(ui->CboxStopBits->currentText().toInt())
    {
        case 1:mSerailPort.setStopBits(QSerialPort::OneStop);break;
        case 2:mSerailPort.setStopBits(QSerialPort::TwoStop);break;
        default :mSerailPort.setStopBits(QSerialPort::OneAndHalfStop);break;
    }

    return mSerailPort.open(QSerialPort::ReadWrite);
}


void thirdWindow::on_BtnOpen_clicked()
{
    if(true == mIsOpen)
    {
        //当前串口助手已经打开了一个串口，这时应该要执行关闭动作
        mSerailPort.close();
        ui->BtnOpen->setText("连接串口");
        mIsOpen = false;

        //使在为未打开时可以选择
        ui->BtnSend->setEnabled(mIsOpen);
        ui->CboxSerialport->setEnabled(true);
        ui->CboxBaudrate->setEnabled(true);
        ui->CboxParity->setEnabled(true);
        ui->CboxDataBits->setEnabled(true);
        ui->CboxStopBits->setEnabled(true);
    }
    else
    {
        //当前串口助手没有打开串口，这时要执行打开串口的动作
        if(true == getSerialPortConfig())
        {
            mIsOpen = true;
            ui->BtnOpen->setText("断开");
            qDebug() <<"成功打开串口"<< mPortName;

            //使其在未断开时不可点击
            ui->BtnSend->setEnabled(mIsOpen);
            ui->CboxSerialport->setEnabled(false);
            ui->CboxBaudrate->setEnabled(false);
            ui->CboxParity->setEnabled(false);
            ui->CboxDataBits->setEnabled(false);
            ui->CboxStopBits->setEnabled(false);
        }

    }

}

void thirdWindow::on_BtnSend_clicked()
{
    //保险起见添加判断
    if(true == mIsOpen)
    {
        mSerailPort.write(ui->TeditSend->toPlainText().toStdString().c_str());
    }
}

void thirdWindow::on_SerialPort_readyRead()
{
    if(true == mIsOpen)
    {
        QByteArray recvData = mSerailPort.readAll();

        ui->TeditRecv->append(QString(recvData));
    }
}
