/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionInitial_data;
    QAction *actionAverage_data;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_1;
    QTextEdit *textEdit;
    QScrollBar *horizontalScrollBarDcmss;
    QScrollBar *verticalScrollBarDcmss;
    QCustomPlot *plotDcmss;
    QLabel *label_1;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QTextEdit *textEdit_2;
    QScrollBar *horizontalScrollBarContois;
    QCustomPlot *plotContois;
    QScrollBar *verticalScrollBarContois;
    QLabel *label_2;
    QWidget *tab_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QTextEdit *textEdit_3;
    QScrollBar *horizontalScrollBarOlsson;
    QCustomPlot *plotOlsson;
    QScrollBar *verticalScrollBarOlsson;
    QLabel *label_3;
    QWidget *tab_4;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_5;
    QScrollBar *horizontalScrollBarBley;
    QCustomPlot *plotBley;
    QScrollBar *verticalScrollBarBley;
    QLabel *label_4;
    QWidget *tab_5;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_4;
    QTextEdit *textEdit_4;
    QScrollBar *horizontalScrollBarTeissier;
    QCustomPlot *plotTeissier;
    QCheckBox *checkBox;
    QScrollBar *verticalScrollBarTeissier;
    QLabel *label_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuData;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1078, 669);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1078, 669));
        MainWindow->setMaximumSize(QSize(1078, 669));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionInitial_data = new QAction(MainWindow);
        actionInitial_data->setObjectName(QStringLiteral("actionInitial_data"));
        actionAverage_data = new QAction(MainWindow);
        actionAverage_data->setObjectName(QStringLiteral("actionAverage_data"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 1081, 601));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        layoutWidget = new QWidget(tab_1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 271, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));

        horizontalLayout->addWidget(pushButton_1);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);

        horizontalScrollBarDcmss = new QScrollBar(tab_1);
        horizontalScrollBarDcmss->setObjectName(QStringLiteral("horizontalScrollBarDcmss"));
        horizontalScrollBarDcmss->setEnabled(true);
        horizontalScrollBarDcmss->setGeometry(QRect(10, 500, 761, 17));
        horizontalScrollBarDcmss->setOrientation(Qt::Horizontal);
        verticalScrollBarDcmss = new QScrollBar(tab_1);
        verticalScrollBarDcmss->setObjectName(QStringLiteral("verticalScrollBarDcmss"));
        verticalScrollBarDcmss->setEnabled(true);
        verticalScrollBarDcmss->setGeometry(QRect(780, 60, 20, 431));
        verticalScrollBarDcmss->setOrientation(Qt::Vertical);
        plotDcmss = new QCustomPlot(tab_1);
        plotDcmss->setObjectName(QStringLiteral("plotDcmss"));
        plotDcmss->setGeometry(QRect(10, 60, 761, 431));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plotDcmss->sizePolicy().hasHeightForWidth());
        plotDcmss->setSizePolicy(sizePolicy1);
        label_1 = new QLabel(tab_1);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(-4, -1, 1081, 581));
        tabWidget->addTab(tab_1, QString());
        label_1->raise();
        layoutWidget->raise();
        horizontalScrollBarDcmss->raise();
        verticalScrollBarDcmss->raise();
        plotDcmss->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 12, 271, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        textEdit_2 = new QTextEdit(layoutWidget_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        horizontalLayout_2->addWidget(textEdit_2);

        horizontalScrollBarContois = new QScrollBar(tab_2);
        horizontalScrollBarContois->setObjectName(QStringLiteral("horizontalScrollBarContois"));
        horizontalScrollBarContois->setGeometry(QRect(10, 500, 761, 17));
        horizontalScrollBarContois->setOrientation(Qt::Horizontal);
        plotContois = new QCustomPlot(tab_2);
        plotContois->setObjectName(QStringLiteral("plotContois"));
        plotContois->setGeometry(QRect(10, 60, 761, 431));
        sizePolicy1.setHeightForWidth(plotContois->sizePolicy().hasHeightForWidth());
        plotContois->setSizePolicy(sizePolicy1);
        verticalScrollBarContois = new QScrollBar(tab_2);
        verticalScrollBarContois->setObjectName(QStringLiteral("verticalScrollBarContois"));
        verticalScrollBarContois->setGeometry(QRect(780, 60, 20, 431));
        verticalScrollBarContois->setOrientation(Qt::Vertical);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-4, -1, 1081, 581));
        tabWidget->addTab(tab_2, QString());
        label_2->raise();
        layoutWidget_2->raise();
        horizontalScrollBarContois->raise();
        plotContois->raise();
        verticalScrollBarContois->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        layoutWidget_3 = new QWidget(tab_3);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 12, 271, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        textEdit_3 = new QTextEdit(layoutWidget_3);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));

        horizontalLayout_3->addWidget(textEdit_3);

        horizontalScrollBarOlsson = new QScrollBar(tab_3);
        horizontalScrollBarOlsson->setObjectName(QStringLiteral("horizontalScrollBarOlsson"));
        horizontalScrollBarOlsson->setGeometry(QRect(10, 500, 761, 17));
        horizontalScrollBarOlsson->setOrientation(Qt::Horizontal);
        plotOlsson = new QCustomPlot(tab_3);
        plotOlsson->setObjectName(QStringLiteral("plotOlsson"));
        plotOlsson->setGeometry(QRect(10, 60, 761, 431));
        sizePolicy1.setHeightForWidth(plotOlsson->sizePolicy().hasHeightForWidth());
        plotOlsson->setSizePolicy(sizePolicy1);
        verticalScrollBarOlsson = new QScrollBar(tab_3);
        verticalScrollBarOlsson->setObjectName(QStringLiteral("verticalScrollBarOlsson"));
        verticalScrollBarOlsson->setGeometry(QRect(780, 60, 20, 431));
        verticalScrollBarOlsson->setOrientation(Qt::Vertical);
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-4, -1, 1081, 581));
        tabWidget->addTab(tab_3, QString());
        label_3->raise();
        layoutWidget_3->raise();
        horizontalScrollBarOlsson->raise();
        plotOlsson->raise();
        verticalScrollBarOlsson->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        layoutWidget_5 = new QWidget(tab_4);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 12, 271, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_5 = new QPushButton(layoutWidget_5);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_5->addWidget(pushButton_5);

        textEdit_5 = new QTextEdit(layoutWidget_5);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));

        horizontalLayout_5->addWidget(textEdit_5);

        horizontalScrollBarBley = new QScrollBar(tab_4);
        horizontalScrollBarBley->setObjectName(QStringLiteral("horizontalScrollBarBley"));
        horizontalScrollBarBley->setGeometry(QRect(20, 500, 751, 17));
        horizontalScrollBarBley->setOrientation(Qt::Horizontal);
        plotBley = new QCustomPlot(tab_4);
        plotBley->setObjectName(QStringLiteral("plotBley"));
        plotBley->setGeometry(QRect(10, 60, 761, 431));
        sizePolicy1.setHeightForWidth(plotBley->sizePolicy().hasHeightForWidth());
        plotBley->setSizePolicy(sizePolicy1);
        verticalScrollBarBley = new QScrollBar(tab_4);
        verticalScrollBarBley->setObjectName(QStringLiteral("verticalScrollBarBley"));
        verticalScrollBarBley->setGeometry(QRect(780, 60, 20, 431));
        verticalScrollBarBley->setOrientation(Qt::Vertical);
        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(-4, -1, 1081, 581));
        tabWidget->addTab(tab_4, QString());
        label_4->raise();
        layoutWidget_5->raise();
        horizontalScrollBarBley->raise();
        plotBley->raise();
        verticalScrollBarBley->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget_4 = new QWidget(tab_5);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 12, 271, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget_4);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_4->addWidget(pushButton_4);

        textEdit_4 = new QTextEdit(layoutWidget_4);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(textEdit_4);

        horizontalScrollBarTeissier = new QScrollBar(tab_5);
        horizontalScrollBarTeissier->setObjectName(QStringLiteral("horizontalScrollBarTeissier"));
        horizontalScrollBarTeissier->setGeometry(QRect(20, 500, 751, 17));
        horizontalScrollBarTeissier->setOrientation(Qt::Horizontal);
        plotTeissier = new QCustomPlot(tab_5);
        plotTeissier->setObjectName(QStringLiteral("plotTeissier"));
        plotTeissier->setGeometry(QRect(10, 60, 761, 431));
        sizePolicy1.setHeightForWidth(plotTeissier->sizePolicy().hasHeightForWidth());
        plotTeissier->setSizePolicy(sizePolicy1);
        checkBox = new QCheckBox(plotTeissier);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(40, -50, 70, 17));
        verticalScrollBarTeissier = new QScrollBar(tab_5);
        verticalScrollBarTeissier->setObjectName(QStringLiteral("verticalScrollBarTeissier"));
        verticalScrollBarTeissier->setGeometry(QRect(780, 60, 20, 431));
        verticalScrollBarTeissier->setOrientation(Qt::Vertical);
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-4, -1, 1081, 581));
        tabWidget->addTab(tab_5, QString());
        label_5->raise();
        layoutWidget_4->raise();
        horizontalScrollBarTeissier->raise();
        plotTeissier->raise();
        verticalScrollBarTeissier->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1078, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuData = new QMenu(menuFile);
        menuData->setObjectName(QStringLiteral("menuData"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuData->menuAction());
        menuFile->addAction(actionExit);
        menuData->addAction(actionInitial_data);
        menuData->addAction(actionAverage_data);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_1, SIGNAL(clicked()), textEdit, SLOT(paste()));

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SimCell", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        actionInitial_data->setText(QApplication::translate("MainWindow", "Initial data", 0));
        actionAverage_data->setText(QApplication::translate("MainWindow", "Average data", 0));
        pushButton_1->setText(QApplication::translate("MainWindow", "Salveaza imaginea", 0));
        label_1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "DCMSS", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Salveaza imaginea", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Contois-Fujimoto ", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Salveaza imaginea", 0));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Olsson", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Salveaza imaginea", 0));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Bley", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Salveaza imaginea", 0));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Teissier ", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuData->setTitle(QApplication::translate("MainWindow", "Data", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
