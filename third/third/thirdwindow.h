#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>

QT_BEGIN_NAMESPACE
namespace Ui { class thirdWindow; }
QT_END_NAMESPACE

class thirdWindow : public QMainWindow
{
    Q_OBJECT

public:
    thirdWindow(QWidget *parent = nullptr);
    ~thirdWindow();

public:
    bool getSerialPortConfig(void);

private slots:
    void on_BtnOpen_clicked();

    void on_BtnSend_clicked();

    void on_SerialPort_readyRead();

private:
    Ui::thirdWindow *ui;

    bool mIsOpen;
    QSerialPort mSerailPort;
    QString mPortName;
    QString mBaudRate;
    QString mParity;
    QString mDataBits;
    QString mStopBits;
};
#endif // THIRDWINDOW_H
