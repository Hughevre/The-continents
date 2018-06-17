/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionDodaj;
    QAction *actionUsu;
    QAction *actionInformacje_o_KontynentV3D;
    QAction *actionDodac;
    QAction *actionUsunac;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListView *listView;
    QGraphicsView *graphicsView;
    QLabel *label_2;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_3;
    QMenuBar *menuBar;
    QMenu *menuObiekt;
    QMenu *menuPomic;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(800, 600);
        MainWindowClass->setMinimumSize(QSize(800, 600));
        actionDodaj = new QAction(MainWindowClass);
        actionDodaj->setObjectName(QStringLiteral("actionDodaj"));
        actionUsu = new QAction(MainWindowClass);
        actionUsu->setObjectName(QStringLiteral("actionUsu"));
        actionInformacje_o_KontynentV3D = new QAction(MainWindowClass);
        actionInformacje_o_KontynentV3D->setObjectName(QStringLiteral("actionInformacje_o_KontynentV3D"));
        actionDodac = new QAction(MainWindowClass);
        actionDodac->setObjectName(QStringLiteral("actionDodac"));
        actionUsunac = new QAction(MainWindowClass);
        actionUsunac->setObjectName(QStringLiteral("actionUsunac"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);

        gridLayout->addWidget(listView, 1, 0, 1, 1);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(4);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(graphicsView, 1, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(2);

        gridLayout->addWidget(tableWidget, 1, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 18));
        QFont font;
        font.setPointSize(9);
        menuBar->setFont(font);
        menuObiekt = new QMenu(menuBar);
        menuObiekt->setObjectName(QStringLiteral("menuObiekt"));
        menuPomic = new QMenu(menuBar);
        menuPomic->setObjectName(QStringLiteral("menuPomic"));
        MainWindowClass->setMenuBar(menuBar);

        menuBar->addAction(menuObiekt->menuAction());
        menuBar->addAction(menuPomic->menuAction());
        menuObiekt->addAction(actionDodac);
        menuObiekt->addSeparator();
        menuObiekt->addAction(actionUsunac);
        menuPomic->addAction(actionInformacje_o_KontynentV3D);

        retranslateUi(MainWindowClass);

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", nullptr));
        actionDodaj->setText(QApplication::translate("MainWindowClass", "Usu\305\204", nullptr));
        actionUsu->setText(QApplication::translate("MainWindowClass", "Dodaj", nullptr));
        actionInformacje_o_KontynentV3D->setText(QApplication::translate("MainWindowClass", "Informacje o KontynentV3D", nullptr));
        actionDodac->setText(QApplication::translate("MainWindowClass", "Dodaj", nullptr));
        actionUsunac->setText(QApplication::translate("MainWindowClass", "Usun", nullptr));
        label_2->setText(QApplication::translate("MainWindowClass", "Podgl\304\205d zawarto\305\233ci", nullptr));
        label->setText(QApplication::translate("MainWindowClass", "Aktualne obiekty", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowClass", "Nazwa", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowClass", "Warto\305\233\304\207", nullptr));
        label_3->setText(QApplication::translate("MainWindowClass", "Lista atrybut\303\263w", nullptr));
        menuObiekt->setTitle(QApplication::translate("MainWindowClass", "Obiekt", nullptr));
        menuPomic->setTitle(QApplication::translate("MainWindowClass", "Pomoc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
