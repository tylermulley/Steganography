/********************************************************************************
** Form generated from reading UI file 'hw4_starter.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HW4_STARTER_H
#define UI_HW4_STARTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HW4_StarterClass
{
public:
    QAction *actionExit;
    QAction *actionExit_2;
    QAction *actionSave;
    QAction *actionSave_2;
    QAction *actionOpen_2;
    QWidget *centralWidget;
    QLabel *label;
    QDial *dial;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuFile;

    void setupUi(QMainWindow *HW4_StarterClass)
    {
        if (HW4_StarterClass->objectName().isEmpty())
            HW4_StarterClass->setObjectName(QStringLiteral("HW4_StarterClass"));
        HW4_StarterClass->resize(658, 554);
        actionExit = new QAction(HW4_StarterClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit_2 = new QAction(HW4_StarterClass);
        actionExit_2->setObjectName(QStringLiteral("actionExit_2"));
        actionSave = new QAction(HW4_StarterClass);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_2 = new QAction(HW4_StarterClass);
        actionSave_2->setObjectName(QStringLiteral("actionSave_2"));
        actionOpen_2 = new QAction(HW4_StarterClass);
        actionOpen_2->setObjectName(QStringLiteral("actionOpen_2"));
        centralWidget = new QWidget(HW4_StarterClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 611, 311));
        label->setFrameShape(QFrame::StyledPanel);
        label->setScaledContents(true);
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(50, 340, 81, 71));
        dial->setMinimum(1);
        dial->setMaximum(8);
        dial->setPageStep(2);
        dial->setNotchesVisible(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 420, 101, 16));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(500, 340, 121, 61));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 430, 121, 61));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(170, 340, 301, 151));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 500, 301, 21));
        HW4_StarterClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HW4_StarterClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        HW4_StarterClass->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen_2);
        menuFile->addAction(actionSave_2);
        menuFile->addSeparator();
        menuFile->addAction(actionExit_2);

        retranslateUi(HW4_StarterClass);
        QObject::connect(actionExit_2, SIGNAL(triggered()), HW4_StarterClass, SLOT(close()));
        QObject::connect(actionOpen_2, SIGNAL(triggered()), HW4_StarterClass, SLOT(loadFile()));
        QObject::connect(HW4_StarterClass, SIGNAL(sendPixmap(QPixmap)), label, SLOT(setPixmap(QPixmap)));
        QObject::connect(actionSave_2, SIGNAL(triggered()), HW4_StarterClass, SLOT(saveFile()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), HW4_StarterClass, SLOT(writeText()));
        QObject::connect(pushButton, SIGNAL(clicked()), HW4_StarterClass, SLOT(readText()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), HW4_StarterClass, SLOT(dialUpdate(int)));
        QObject::connect(HW4_StarterClass, SIGNAL(sendQString(QString)), label_3, SLOT(setText(QString)));

        QMetaObject::connectSlotsByName(HW4_StarterClass);
    } // setupUi

    void retranslateUi(QMainWindow *HW4_StarterClass)
    {
        HW4_StarterClass->setWindowTitle(QApplication::translate("HW4_StarterClass", "HW4_Starter", 0));
        actionExit->setText(QApplication::translate("HW4_StarterClass", "Exit", 0));
        actionExit_2->setText(QApplication::translate("HW4_StarterClass", "Exit", 0));
        actionSave->setText(QApplication::translate("HW4_StarterClass", "Save", 0));
        actionSave_2->setText(QApplication::translate("HW4_StarterClass", "Save...", 0));
        actionOpen_2->setText(QApplication::translate("HW4_StarterClass", "Open...", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("HW4_StarterClass", "Number of Bits Used", 0));
        pushButton->setText(QApplication::translate("HW4_StarterClass", "Read", 0));
        pushButton_2->setText(QApplication::translate("HW4_StarterClass", "Write", 0));
        label_3->setText(QApplication::translate("HW4_StarterClass", "0 characters can be embedded", 0));
        menuFile->setTitle(QApplication::translate("HW4_StarterClass", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class HW4_StarterClass: public Ui_HW4_StarterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HW4_STARTER_H
