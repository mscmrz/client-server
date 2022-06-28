/********************************************************************************
** Form generated from reading UI file 'serverwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWIDGET_H
#define UI_SERVERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serverwidget
{
public:
    QPushButton *btn_openFile;
    QLabel *lbl_path;
    QPushButton *btn_BackupData;
    QGroupBox *groupBox;
    QPushButton *Send;
    QWidget *widget;
    QFormLayout *formLayout;
    QPushButton *btn_Connect;
    QPushButton *btn_dic;
    QTextEdit *textEditRead;
    QPlainTextEdit *textEditWrite;

    void setupUi(QWidget *serverwidget)
    {
        if (serverwidget->objectName().isEmpty())
            serverwidget->setObjectName(QString::fromUtf8("serverwidget"));
        serverwidget->resize(598, 659);
        btn_openFile = new QPushButton(serverwidget);
        btn_openFile->setObjectName(QString::fromUtf8("btn_openFile"));
        btn_openFile->setGeometry(QRect(555, 608, 34, 23));
        lbl_path = new QLabel(serverwidget);
        lbl_path->setObjectName(QString::fromUtf8("lbl_path"));
        lbl_path->setGeometry(QRect(9, 637, 16, 16));
        btn_BackupData = new QPushButton(serverwidget);
        btn_BackupData->setObjectName(QString::fromUtf8("btn_BackupData"));
        btn_BackupData->setGeometry(QRect(9, 608, 541, 23));
        groupBox = new QGroupBox(serverwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 530, 581, 51));
        Send = new QPushButton(groupBox);
        Send->setObjectName(QString::fromUtf8("Send"));
        Send->setGeometry(QRect(11, 12, 201, 31));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(411, 15, 158, 25));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        btn_Connect = new QPushButton(widget);
        btn_Connect->setObjectName(QString::fromUtf8("btn_Connect"));

        formLayout->setWidget(0, QFormLayout::LabelRole, btn_Connect);

        btn_dic = new QPushButton(widget);
        btn_dic->setObjectName(QString::fromUtf8("btn_dic"));

        formLayout->setWidget(0, QFormLayout::FieldRole, btn_dic);

        textEditRead = new QTextEdit(serverwidget);
        textEditRead->setObjectName(QString::fromUtf8("textEditRead"));
        textEditRead->setGeometry(QRect(10, 10, 581, 431));
        textEditWrite = new QPlainTextEdit(serverwidget);
        textEditWrite->setObjectName(QString::fromUtf8("textEditWrite"));
        textEditWrite->setGeometry(QRect(10, 447, 581, 71));

        retranslateUi(serverwidget);

        QMetaObject::connectSlotsByName(serverwidget);
    } // setupUi

    void retranslateUi(QWidget *serverwidget)
    {
        serverwidget->setWindowTitle(QCoreApplication::translate("serverwidget", "serverwidget", nullptr));
        btn_openFile->setText(QString());
        lbl_path->setText(QString());
        btn_BackupData->setText(QCoreApplication::translate("serverwidget", "Backup Data", nullptr));
        groupBox->setTitle(QString());
        Send->setText(QCoreApplication::translate("serverwidget", "Send", nullptr));
        btn_Connect->setText(QCoreApplication::translate("serverwidget", "Connect", nullptr));
        btn_dic->setText(QCoreApplication::translate("serverwidget", "Disconnect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class serverwidget: public Ui_serverwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWIDGET_H
