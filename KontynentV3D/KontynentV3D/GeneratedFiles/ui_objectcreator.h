/********************************************************************************
** Form generated from reading UI file 'objectcreator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJECTCREATOR_H
#define UI_OBJECTCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ObjectCreator
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListView *listView;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *dodaj_1;
    QPushButton *anuluj_1;

    void setupUi(QDialog *ObjectCreator)
    {
        if (ObjectCreator->objectName().isEmpty())
            ObjectCreator->setObjectName(QStringLiteral("ObjectCreator"));
        ObjectCreator->resize(800, 600);
        ObjectCreator->setMinimumSize(QSize(800, 600));
        verticalLayout = new QVBoxLayout(ObjectCreator);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ObjectCreator);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        listView = new QListView(ObjectCreator);
        listView->setObjectName(QStringLiteral("listView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(listView);

        frame = new QFrame(ObjectCreator);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(651, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dodaj_1 = new QPushButton(frame);
        dodaj_1->setObjectName(QStringLiteral("dodaj_1"));

        horizontalLayout->addWidget(dodaj_1);

        anuluj_1 = new QPushButton(frame);
        anuluj_1->setObjectName(QStringLiteral("anuluj_1"));

        horizontalLayout->addWidget(anuluj_1);


        verticalLayout->addWidget(frame);


        retranslateUi(ObjectCreator);

        QMetaObject::connectSlotsByName(ObjectCreator);
    } // setupUi

    void retranslateUi(QDialog *ObjectCreator)
    {
        ObjectCreator->setWindowTitle(QApplication::translate("ObjectCreator", "Dialog", nullptr));
        label->setText(QApplication::translate("ObjectCreator", "Lista dost\304\231pnych obiekt\303\263w:", nullptr));
        dodaj_1->setText(QApplication::translate("ObjectCreator", "Dodaj", nullptr));
        anuluj_1->setText(QApplication::translate("ObjectCreator", "Anuluj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ObjectCreator: public Ui_ObjectCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJECTCREATOR_H
