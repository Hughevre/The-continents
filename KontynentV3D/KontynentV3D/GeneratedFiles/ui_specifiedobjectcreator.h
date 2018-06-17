/********************************************************************************
** Form generated from reading UI file 'specifiedobjectcreator.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIFIEDOBJECTCREATOR_H
#define UI_SPECIFIEDOBJECTCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpecifiedObjectCreator
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *dodaj_2;
    QPushButton *anuluj_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QFrame *line;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QFrame *line_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QFrame *line_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QFrame *line_4;

    void setupUi(QDialog *SpecifiedObjectCreator)
    {
        if (SpecifiedObjectCreator->objectName().isEmpty())
            SpecifiedObjectCreator->setObjectName(QStringLiteral("SpecifiedObjectCreator"));
        SpecifiedObjectCreator->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SpecifiedObjectCreator->sizePolicy().hasHeightForWidth());
        SpecifiedObjectCreator->setSizePolicy(sizePolicy);
        SpecifiedObjectCreator->setMinimumSize(QSize(800, 600));
        gridLayout = new QGridLayout(SpecifiedObjectCreator);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(468, 76, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(468, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 440, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        frame = new QFrame(SpecifiedObjectCreator);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dodaj_2 = new QPushButton(frame);
        dodaj_2->setObjectName(QStringLiteral("dodaj_2"));

        horizontalLayout->addWidget(dodaj_2);

        anuluj_2 = new QPushButton(frame);
        anuluj_2->setObjectName(QStringLiteral("anuluj_2"));

        horizontalLayout->addWidget(anuluj_2);


        gridLayout->addWidget(frame, 3, 3, 1, 1);

        groupBox = new QGroupBox(SpecifiedObjectCreator);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_3->addWidget(lineEdit_4);

        line = new QFrame(groupBox);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_3->addWidget(lineEdit_2);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(SpecifiedObjectCreator);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        lineEdit_3 = new QLineEdit(groupBox_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        line_4 = new QFrame(groupBox_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(SpecifiedObjectCreator);

        QMetaObject::connectSlotsByName(SpecifiedObjectCreator);
    } // setupUi

    void retranslateUi(QDialog *SpecifiedObjectCreator)
    {
        SpecifiedObjectCreator->setWindowTitle(QApplication::translate("SpecifiedObjectCreator", "Dialog", nullptr));
        dodaj_2->setText(QApplication::translate("SpecifiedObjectCreator", "Dodaj", nullptr));
        anuluj_2->setText(QApplication::translate("SpecifiedObjectCreator", "Anuluj", nullptr));
        groupBox->setTitle(QApplication::translate("SpecifiedObjectCreator", "Podstawowe", nullptr));
        label->setText(QApplication::translate("SpecifiedObjectCreator", "Powierzchnia", nullptr));
        label_2->setText(QApplication::translate("SpecifiedObjectCreator", "Identyfikator", nullptr));
        groupBox_2->setTitle(QApplication::translate("SpecifiedObjectCreator", "Dodatkowe", nullptr));
        label_3->setText(QApplication::translate("SpecifiedObjectCreator", "Poziom zasolenia w\303\263d", nullptr));
        label_4->setText(QApplication::translate("SpecifiedObjectCreator", "G\304\231sto\305\233\304\207 owoc\303\263w morza", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecifiedObjectCreator: public Ui_SpecifiedObjectCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIFIEDOBJECTCREATOR_H
