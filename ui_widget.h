/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *mainWindow;
    QWidget *screen;
    QPushButton *InitializeButton;
    QPushButton *StartButton;
    QPushButton *StopButton;
    QLineEdit *PosX;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *PosY;
    QLabel *label_3;
    QLineEdit *Degree;
    QLabel *time;
    QLabel *label_4;
    QPushButton *ContinueButton;
    QRadioButton *P0Selected;
    QRadioButton *P1Selected;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1104, 885);
        mainWindow = new QWidget(Widget);
        mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->setGeometry(QRect(0, 0, 1100, 900));
        screen = new QWidget(mainWindow);
        screen->setObjectName(QStringLiteral("screen"));
        screen->setGeometry(QRect(0, 0, 900, 900));
        InitializeButton = new QPushButton(mainWindow);
        InitializeButton->setObjectName(QStringLiteral("InitializeButton"));
        InitializeButton->setGeometry(QRect(950, 410, 93, 28));
        StartButton = new QPushButton(mainWindow);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(950, 550, 93, 28));
        StopButton = new QPushButton(mainWindow);
        StopButton->setObjectName(QStringLiteral("StopButton"));
        StopButton->setGeometry(QRect(950, 610, 93, 28));
        PosX = new QLineEdit(mainWindow);
        PosX->setObjectName(QStringLiteral("PosX"));
        PosX->setGeometry(QRect(990, 440, 81, 21));
        PosX->setAlignment(Qt::AlignCenter);
        label = new QLabel(mainWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(960, 440, 31, 16));
        label_2 = new QLabel(mainWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(960, 460, 31, 16));
        PosY = new QLineEdit(mainWindow);
        PosY->setObjectName(QStringLiteral("PosY"));
        PosY->setGeometry(QRect(990, 460, 81, 21));
        PosY->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(mainWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(960, 480, 31, 16));
        Degree = new QLineEdit(mainWindow);
        Degree->setObjectName(QStringLiteral("Degree"));
        Degree->setGeometry(QRect(990, 480, 81, 21));
        Degree->setMaxLength(360);
        Degree->setAlignment(Qt::AlignCenter);
        time = new QLabel(mainWindow);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(1010, 60, 72, 15));
        label_4 = new QLabel(mainWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(920, 60, 72, 15));
        ContinueButton = new QPushButton(mainWindow);
        ContinueButton->setObjectName(QStringLiteral("ContinueButton"));
        ContinueButton->setGeometry(QRect(950, 670, 93, 28));
        P0Selected = new QRadioButton(mainWindow);
        P0Selected->setObjectName(QStringLiteral("P0Selected"));
        P0Selected->setGeometry(QRect(960, 510, 51, 19));
        P0Selected->setChecked(true);
        P1Selected = new QRadioButton(mainWindow);
        P1Selected->setObjectName(QStringLiteral("P1Selected"));
        P1Selected->setGeometry(QRect(1010, 510, 115, 19));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        InitializeButton->setText(QApplication::translate("Widget", "Initialize", nullptr));
        StartButton->setText(QApplication::translate("Widget", "Start!", nullptr));
        StopButton->setText(QApplication::translate("Widget", "Stop", nullptr));
        PosX->setText(QApplication::translate("Widget", "840", nullptr));
        label->setText(QApplication::translate("Widget", "X:", nullptr));
        label_2->setText(QApplication::translate("Widget", "Y:", nullptr));
        PosY->setText(QApplication::translate("Widget", "55", nullptr));
        label_3->setText(QApplication::translate("Widget", "A:", nullptr));
        Degree->setText(QApplication::translate("Widget", "90", nullptr));
        time->setText(QString());
        label_4->setText(QApplication::translate("Widget", "\350\277\220\350\241\214\346\227\266\351\227\264\357\274\232", nullptr));
        ContinueButton->setText(QApplication::translate("Widget", "Continue", nullptr));
        P0Selected->setText(QApplication::translate("Widget", "P0", nullptr));
        P1Selected->setText(QApplication::translate("Widget", "P1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
