/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *CboxSerialport;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *CboxBaudrate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *CboxParity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *CboxDataBits;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *CboxStopBits;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *BtnOpen;
    QSpacerItem *verticalSpacer;
    QPushButton *BtnSend;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *TeditRecv;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *TeditSend;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *thirdWindow)
    {
        if (thirdWindow->objectName().isEmpty())
            thirdWindow->setObjectName(QString::fromUtf8("thirdWindow"));
        thirdWindow->resize(857, 679);
        centralwidget = new QWidget(thirdWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 190, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        CboxSerialport = new QComboBox(layoutWidget);
        CboxSerialport->setObjectName(QString::fromUtf8("CboxSerialport"));

        horizontalLayout->addWidget(CboxSerialport);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        CboxBaudrate = new QComboBox(layoutWidget);
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->addItem(QString());
        CboxBaudrate->setObjectName(QString::fromUtf8("CboxBaudrate"));

        horizontalLayout_2->addWidget(CboxBaudrate);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        CboxParity = new QComboBox(layoutWidget);
        CboxParity->addItem(QString());
        CboxParity->addItem(QString());
        CboxParity->addItem(QString());
        CboxParity->setObjectName(QString::fromUtf8("CboxParity"));

        horizontalLayout_3->addWidget(CboxParity);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        CboxDataBits = new QComboBox(layoutWidget);
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->addItem(QString());
        CboxDataBits->setObjectName(QString::fromUtf8("CboxDataBits"));

        horizontalLayout_4->addWidget(CboxDataBits);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        CboxStopBits = new QComboBox(layoutWidget);
        CboxStopBits->addItem(QString());
        CboxStopBits->addItem(QString());
        CboxStopBits->addItem(QString());
        CboxStopBits->setObjectName(QString::fromUtf8("CboxStopBits"));

        horizontalLayout_5->addWidget(CboxStopBits);


        verticalLayout->addLayout(horizontalLayout_5);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 390, 121, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnOpen = new QPushButton(layoutWidget1);
        BtnOpen->setObjectName(QString::fromUtf8("BtnOpen"));

        verticalLayout_2->addWidget(BtnOpen);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        BtnSend = new QPushButton(layoutWidget1);
        BtnSend->setObjectName(QString::fromUtf8("BtnSend"));

        verticalLayout_2->addWidget(BtnSend);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(300, 30, 481, 551));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        TeditRecv = new QTextEdit(layoutWidget2);
        TeditRecv->setObjectName(QString::fromUtf8("TeditRecv"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(6);
        sizePolicy.setHeightForWidth(TeditRecv->sizePolicy().hasHeightForWidth());
        TeditRecv->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(TeditRecv);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        TeditSend = new QTextEdit(layoutWidget2);
        TeditSend->setObjectName(QString::fromUtf8("TeditSend"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(TeditSend->sizePolicy().hasHeightForWidth());
        TeditSend->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(TeditSend);

        thirdWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(thirdWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 857, 29));
        thirdWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(thirdWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        thirdWindow->setStatusBar(statusbar);

        retranslateUi(thirdWindow);

        QMetaObject::connectSlotsByName(thirdWindow);
    } // setupUi

    void retranslateUi(QMainWindow *thirdWindow)
    {
        thirdWindow->setWindowTitle(QCoreApplication::translate("thirdWindow", "\344\270\262\345\217\243\350\260\203\350\257\225\345\212\251\346\211\213", nullptr));
        label->setText(QCoreApplication::translate("thirdWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_2->setText(QCoreApplication::translate("thirdWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        CboxBaudrate->setItemText(0, QCoreApplication::translate("thirdWindow", "115200", nullptr));
        CboxBaudrate->setItemText(1, QCoreApplication::translate("thirdWindow", "57600", nullptr));
        CboxBaudrate->setItemText(2, QCoreApplication::translate("thirdWindow", "38400", nullptr));
        CboxBaudrate->setItemText(3, QCoreApplication::translate("thirdWindow", "19200", nullptr));
        CboxBaudrate->setItemText(4, QCoreApplication::translate("thirdWindow", "9600", nullptr));
        CboxBaudrate->setItemText(5, QCoreApplication::translate("thirdWindow", "4800", nullptr));
        CboxBaudrate->setItemText(6, QCoreApplication::translate("thirdWindow", "2400", nullptr));
        CboxBaudrate->setItemText(7, QCoreApplication::translate("thirdWindow", "1200", nullptr));

        label_3->setText(QCoreApplication::translate("thirdWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        CboxParity->setItemText(0, QCoreApplication::translate("thirdWindow", "NONE", nullptr));
        CboxParity->setItemText(1, QCoreApplication::translate("thirdWindow", "ODD", nullptr));
        CboxParity->setItemText(2, QCoreApplication::translate("thirdWindow", "EVEN", nullptr));

        label_4->setText(QCoreApplication::translate("thirdWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        CboxDataBits->setItemText(0, QCoreApplication::translate("thirdWindow", "8", nullptr));
        CboxDataBits->setItemText(1, QCoreApplication::translate("thirdWindow", "7", nullptr));
        CboxDataBits->setItemText(2, QCoreApplication::translate("thirdWindow", "6", nullptr));
        CboxDataBits->setItemText(3, QCoreApplication::translate("thirdWindow", "5", nullptr));

        label_5->setText(QCoreApplication::translate("thirdWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        CboxStopBits->setItemText(0, QCoreApplication::translate("thirdWindow", "1", nullptr));
        CboxStopBits->setItemText(1, QCoreApplication::translate("thirdWindow", "1.5", nullptr));
        CboxStopBits->setItemText(2, QCoreApplication::translate("thirdWindow", "2", nullptr));

        BtnOpen->setText(QCoreApplication::translate("thirdWindow", "\346\211\223\345\274\200", nullptr));
        BtnSend->setText(QCoreApplication::translate("thirdWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdWindow: public Ui_thirdWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H
