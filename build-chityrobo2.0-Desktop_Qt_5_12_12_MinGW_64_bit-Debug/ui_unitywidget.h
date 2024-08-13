/********************************************************************************
** Form generated from reading UI file 'unitywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITYWIDGET_H
#define UI_UNITYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnityWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *UnityWidget)
    {
        if (UnityWidget->objectName().isEmpty())
            UnityWidget->setObjectName(QString::fromUtf8("UnityWidget"));
        UnityWidget->resize(1312, 668);
        horizontalLayout_2 = new QHBoxLayout(UnityWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(UnityWidget);

        QMetaObject::connectSlotsByName(UnityWidget);
    } // setupUi

    void retranslateUi(QWidget *UnityWidget)
    {
        UnityWidget->setWindowTitle(QApplication::translate("UnityWidget", "UnityWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnityWidget: public Ui_UnityWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITYWIDGET_H
