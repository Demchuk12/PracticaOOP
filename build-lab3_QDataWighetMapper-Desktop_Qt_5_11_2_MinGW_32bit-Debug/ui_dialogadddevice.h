/********************************************************************************
** Form generated from reading UI file 'dialogadddevice.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDDEVICE_H
#define UI_DIALOGADDDEVICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddDevice
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *surnameLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *lastnameLineEdit;
    QPushButton *nextButton;
    QPushButton *pushButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *DialogAddDevice)
    {
        if (DialogAddDevice->objectName().isEmpty())
            DialogAddDevice->setObjectName(QStringLiteral("DialogAddDevice"));
        DialogAddDevice->resize(300, 224);
        verticalLayout_2 = new QVBoxLayout(DialogAddDevice);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        surnameLineEdit = new QLineEdit(DialogAddDevice);
        surnameLineEdit->setObjectName(QStringLiteral("surnameLineEdit"));

        verticalLayout->addWidget(surnameLineEdit);

        nameLineEdit = new QLineEdit(DialogAddDevice);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        lastnameLineEdit = new QLineEdit(DialogAddDevice);
        lastnameLineEdit->setObjectName(QStringLiteral("lastnameLineEdit"));

        verticalLayout->addWidget(lastnameLineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        nextButton = new QPushButton(DialogAddDevice);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        verticalLayout_2->addWidget(nextButton);

        pushButton = new QPushButton(DialogAddDevice);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        buttonBox = new QDialogButtonBox(DialogAddDevice);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(DialogAddDevice);

        QMetaObject::connectSlotsByName(DialogAddDevice);
    } // setupUi

    void retranslateUi(QWidget *DialogAddDevice)
    {
        DialogAddDevice->setWindowTitle(QApplication::translate("DialogAddDevice", "Form", nullptr));
        nextButton->setText(QApplication::translate("DialogAddDevice", "\320\235\320\260\321\201\321\202\321\203\320\277\320\275\320\270\320\271", nullptr));
        pushButton->setText(QApplication::translate("DialogAddDevice", "\320\237\320\276\320\277\320\265\321\200\320\265\320\264\320\275\321\226\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddDevice: public Ui_DialogAddDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDDEVICE_H
