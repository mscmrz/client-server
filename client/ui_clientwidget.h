/********************************************************************************
** Form generated from reading UI file 'clientwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTWIDGET_H
#define UI_CLIENTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientwidget
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEditRead;
    QLabel *lbl_path;
    QHBoxLayout *horizontalLayout;
    QPushButton *Send;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *textEditWrite;
    QPushButton *btn_openFile;
    QPushButton *btn_BackupData;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditIP;
    QLabel *label_2;
    QLineEdit *lineEditPort;
    QPushButton *Connect;
    QPushButton *btn_dis;

    void setupUi(QWidget *clientwidget)
    {
        if (clientwidget->objectName().isEmpty())
            clientwidget->setObjectName(QString::fromUtf8("clientwidget"));
        clientwidget->resize(652, 600);
        gridLayout = new QGridLayout(clientwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEditRead = new QTextEdit(clientwidget);
        textEditRead->setObjectName(QString::fromUtf8("textEditRead"));
        textEditRead->setEnabled(true);

        gridLayout->addWidget(textEditRead, 0, 0, 1, 2);

        lbl_path = new QLabel(clientwidget);
        lbl_path->setObjectName(QString::fromUtf8("lbl_path"));

        gridLayout->addWidget(lbl_path, 6, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Send = new QPushButton(clientwidget);
        Send->setObjectName(QString::fromUtf8("Send"));

        horizontalLayout->addWidget(Send);

        horizontalSpacer = new QSpacerItem(205, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);

        textEditWrite = new QPlainTextEdit(clientwidget);
        textEditWrite->setObjectName(QString::fromUtf8("textEditWrite"));
        textEditWrite->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(textEditWrite, 1, 0, 1, 2);

        btn_openFile = new QPushButton(clientwidget);
        btn_openFile->setObjectName(QString::fromUtf8("btn_openFile"));

        gridLayout->addWidget(btn_openFile, 5, 1, 1, 1);

        btn_BackupData = new QPushButton(clientwidget);
        btn_BackupData->setObjectName(QString::fromUtf8("btn_BackupData"));

        gridLayout->addWidget(btn_BackupData, 5, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(clientwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditIP = new QLineEdit(clientwidget);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        horizontalLayout_3->addWidget(lineEditIP);

        label_2 = new QLabel(clientwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEditPort = new QLineEdit(clientwidget);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setEnabled(false);

        horizontalLayout_3->addWidget(lineEditPort);

        Connect = new QPushButton(clientwidget);
        Connect->setObjectName(QString::fromUtf8("Connect"));

        horizontalLayout_3->addWidget(Connect);

        btn_dis = new QPushButton(clientwidget);
        btn_dis->setObjectName(QString::fromUtf8("btn_dis"));

        horizontalLayout_3->addWidget(btn_dis);


        gridLayout->addLayout(horizontalLayout_3, 4, 0, 1, 1);


        retranslateUi(clientwidget);

        QMetaObject::connectSlotsByName(clientwidget);
    } // setupUi

    void retranslateUi(QWidget *clientwidget)
    {
        clientwidget->setWindowTitle(QCoreApplication::translate("clientwidget", "clientwidget", nullptr));
        lbl_path->setText(QCoreApplication::translate("clientwidget", "TextLabel", nullptr));
        Send->setText(QCoreApplication::translate("clientwidget", "Send", nullptr));
        btn_openFile->setText(QString());
        btn_BackupData->setText(QCoreApplication::translate("clientwidget", "Bakup Data", nullptr));
        label->setText(QCoreApplication::translate("clientwidget", "IP Address:", nullptr));
        lineEditIP->setText(QCoreApplication::translate("clientwidget", "127.0.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("clientwidget", "Port:", nullptr));
        lineEditPort->setText(QCoreApplication::translate("clientwidget", "9999", nullptr));
        Connect->setText(QCoreApplication::translate("clientwidget", "Connect", nullptr));
        btn_dis->setText(QCoreApplication::translate("clientwidget", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientwidget: public Ui_clientwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTWIDGET_H
