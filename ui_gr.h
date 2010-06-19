/********************************************************************************
** Form generated from reading UI file 'gr.ui'
**
** Created: Sat Jun 19 12:51:33 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GR_H
#define UI_GR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GR
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidgetPrincipal;
    QWidget *Principal;
    QLabel *labelTitulo;
    QPushButton *botonPerfiles;
    QPushButton *botonGimnasio;
    QPushButton *botonEjercicios;
    QPushButton *botonRutinas;
    QPushButton *botonResultados;
    QPushButton *botonMusica;
    QWidget *Perfiles;
    QLabel *labelPerfiles;
    QLabel *labelAtras;
    QPushButton *botonAtrasPerfiles;
    QPushButton *botonAnadirPerfil;
    QWidget *AnadirPerfil;
    QLabel *labelAnadirPerfil;
    QPushButton *botonAtrasAnadirPerfil;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labelGenero;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioMasculino;
    QRadioButton *radioFemenino;
    QLabel *labelEdad;
    QLineEdit *lineEdad;
    QLabel *labelAnos;
    QLabel *labelPeso;
    QLineEdit *linePeso;
    QLabel *labelKilogramos;
    QLabel *labelEstatura;
    QLineEdit *lineEstatura;
    QLabel *labelCentimetros;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QLabel *labeNombre;
    QLineEdit *lineNombre;
    QPushButton *botonOkAnadirPerfil;
    QWidget *Perfiles2;
    QLabel *labelPerfiles2;
    QPushButton *botonAtrasPerfiles2;
    QPushButton *botonAnadirPerfil2;
    QLabel *labelPerfiCarlos;
    QLabel *labelPerfiCarlos_2;
    QLabel *labelPerfiCarlos_3;
    QLabel *labelPerfiCarlos_4;

    void setupUi(QMainWindow *GR)
    {
        if (GR->objectName().isEmpty())
            GR->setObjectName(QString::fromUtf8("GR"));
        GR->resize(600, 800);
        centralWidget = new QWidget(GR);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidgetPrincipal = new QStackedWidget(centralWidget);
        stackedWidgetPrincipal->setObjectName(QString::fromUtf8("stackedWidgetPrincipal"));
        stackedWidgetPrincipal->setGeometry(QRect(0, 0, 600, 800));
        Principal = new QWidget();
        Principal->setObjectName(QString::fromUtf8("Principal"));
        labelTitulo = new QLabel(Principal);
        labelTitulo->setObjectName(QString::fromUtf8("labelTitulo"));
        labelTitulo->setGeometry(QRect(0, 0, 600, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        labelTitulo->setFont(font);
        labelTitulo->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 231, 0);"));
        labelTitulo->setAlignment(Qt::AlignCenter);
        botonPerfiles = new QPushButton(Principal);
        botonPerfiles->setObjectName(QString::fromUtf8("botonPerfiles"));
        botonPerfiles->setGeometry(QRect(0, 80, 600, 80));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font1.setPointSize(16);
        botonPerfiles->setFont(font1);
        botonGimnasio = new QPushButton(Principal);
        botonGimnasio->setObjectName(QString::fromUtf8("botonGimnasio"));
        botonGimnasio->setGeometry(QRect(0, 160, 600, 80));
        botonGimnasio->setFont(font1);
        botonEjercicios = new QPushButton(Principal);
        botonEjercicios->setObjectName(QString::fromUtf8("botonEjercicios"));
        botonEjercicios->setGeometry(QRect(0, 240, 600, 80));
        botonEjercicios->setFont(font1);
        botonRutinas = new QPushButton(Principal);
        botonRutinas->setObjectName(QString::fromUtf8("botonRutinas"));
        botonRutinas->setGeometry(QRect(0, 320, 600, 80));
        botonRutinas->setFont(font1);
        botonResultados = new QPushButton(Principal);
        botonResultados->setObjectName(QString::fromUtf8("botonResultados"));
        botonResultados->setGeometry(QRect(0, 400, 600, 80));
        botonResultados->setFont(font1);
        botonMusica = new QPushButton(Principal);
        botonMusica->setObjectName(QString::fromUtf8("botonMusica"));
        botonMusica->setGeometry(QRect(0, 480, 600, 80));
        botonMusica->setFont(font1);
        stackedWidgetPrincipal->addWidget(Principal);
        Perfiles = new QWidget();
        Perfiles->setObjectName(QString::fromUtf8("Perfiles"));
        labelPerfiles = new QLabel(Perfiles);
        labelPerfiles->setObjectName(QString::fromUtf8("labelPerfiles"));
        labelPerfiles->setGeometry(QRect(0, 0, 600, 80));
        labelPerfiles->setFont(font);
        labelPerfiles->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 231, 0);"));
        labelPerfiles->setAlignment(Qt::AlignCenter);
        labelAtras = new QLabel(Perfiles);
        labelAtras->setObjectName(QString::fromUtf8("labelAtras"));
        labelAtras->setGeometry(QRect(50, 40, 64, 17));
        botonAtrasPerfiles = new QPushButton(Perfiles);
        botonAtrasPerfiles->setObjectName(QString::fromUtf8("botonAtrasPerfiles"));
        botonAtrasPerfiles->setGeometry(QRect(10, 10, 60, 60));
        botonAtrasPerfiles->setStyleSheet(QString::fromUtf8(""));
        botonAnadirPerfil = new QPushButton(Perfiles);
        botonAnadirPerfil->setObjectName(QString::fromUtf8("botonAnadirPerfil"));
        botonAnadirPerfil->setGeometry(QRect(530, 10, 60, 60));
        botonAnadirPerfil->setFont(font);
        botonAnadirPerfil->setStyleSheet(QString::fromUtf8(""));
        stackedWidgetPrincipal->addWidget(Perfiles);
        AnadirPerfil = new QWidget();
        AnadirPerfil->setObjectName(QString::fromUtf8("AnadirPerfil"));
        labelAnadirPerfil = new QLabel(AnadirPerfil);
        labelAnadirPerfil->setObjectName(QString::fromUtf8("labelAnadirPerfil"));
        labelAnadirPerfil->setGeometry(QRect(0, 0, 600, 80));
        labelAnadirPerfil->setFont(font);
        labelAnadirPerfil->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 231, 0);"));
        labelAnadirPerfil->setAlignment(Qt::AlignCenter);
        botonAtrasAnadirPerfil = new QPushButton(AnadirPerfil);
        botonAtrasAnadirPerfil->setObjectName(QString::fromUtf8("botonAtrasAnadirPerfil"));
        botonAtrasAnadirPerfil->setGeometry(QRect(10, 10, 60, 60));
        botonAtrasAnadirPerfil->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(AnadirPerfil);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 210, 457, 214));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelGenero = new QLabel(widget);
        labelGenero->setObjectName(QString::fromUtf8("labelGenero"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        labelGenero->setFont(font2);

        gridLayout->addWidget(labelGenero, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioMasculino = new QRadioButton(widget);
        radioMasculino->setObjectName(QString::fromUtf8("radioMasculino"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font3.setPointSize(14);
        radioMasculino->setFont(font3);

        horizontalLayout->addWidget(radioMasculino);

        radioFemenino = new QRadioButton(widget);
        radioFemenino->setObjectName(QString::fromUtf8("radioFemenino"));
        radioFemenino->setFont(font3);

        horizontalLayout->addWidget(radioFemenino);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        labelEdad = new QLabel(widget);
        labelEdad->setObjectName(QString::fromUtf8("labelEdad"));
        labelEdad->setFont(font2);

        gridLayout->addWidget(labelEdad, 2, 0, 1, 1);

        lineEdad = new QLineEdit(widget);
        lineEdad->setObjectName(QString::fromUtf8("lineEdad"));
        lineEdad->setMinimumSize(QSize(0, 0));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setItalic(true);
        font4.setWeight(75);
        lineEdad->setFont(font4);

        gridLayout->addWidget(lineEdad, 2, 1, 1, 1);

        labelAnos = new QLabel(widget);
        labelAnos->setObjectName(QString::fromUtf8("labelAnos"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        labelAnos->setFont(font5);

        gridLayout->addWidget(labelAnos, 2, 2, 1, 1);

        labelPeso = new QLabel(widget);
        labelPeso->setObjectName(QString::fromUtf8("labelPeso"));
        labelPeso->setFont(font2);

        gridLayout->addWidget(labelPeso, 4, 0, 1, 1);

        linePeso = new QLineEdit(widget);
        linePeso->setObjectName(QString::fromUtf8("linePeso"));
        linePeso->setMinimumSize(QSize(0, 0));
        linePeso->setFont(font4);

        gridLayout->addWidget(linePeso, 4, 1, 1, 1);

        labelKilogramos = new QLabel(widget);
        labelKilogramos->setObjectName(QString::fromUtf8("labelKilogramos"));
        labelKilogramos->setFont(font5);

        gridLayout->addWidget(labelKilogramos, 4, 2, 1, 1);

        labelEstatura = new QLabel(widget);
        labelEstatura->setObjectName(QString::fromUtf8("labelEstatura"));
        labelEstatura->setFont(font2);

        gridLayout->addWidget(labelEstatura, 6, 0, 1, 1);

        lineEstatura = new QLineEdit(widget);
        lineEstatura->setObjectName(QString::fromUtf8("lineEstatura"));
        lineEstatura->setMinimumSize(QSize(0, 0));
        lineEstatura->setFont(font4);

        gridLayout->addWidget(lineEstatura, 6, 1, 1, 1);

        labelCentimetros = new QLabel(widget);
        labelCentimetros->setObjectName(QString::fromUtf8("labelCentimetros"));
        labelCentimetros->setFont(font5);

        gridLayout->addWidget(labelCentimetros, 6, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 1, 1, 1);

        labeNombre = new QLabel(AnadirPerfil);
        labeNombre->setObjectName(QString::fromUtf8("labeNombre"));
        labeNombre->setGeometry(QRect(50, 120, 91, 31));
        labeNombre->setFont(font2);
        lineNombre = new QLineEdit(AnadirPerfil);
        lineNombre->setObjectName(QString::fromUtf8("lineNombre"));
        lineNombre->setGeometry(QRect(50, 150, 455, 38));
        lineNombre->setMinimumSize(QSize(401, 0));
        lineNombre->setFont(font4);
        botonOkAnadirPerfil = new QPushButton(AnadirPerfil);
        botonOkAnadirPerfil->setObjectName(QString::fromUtf8("botonOkAnadirPerfil"));
        botonOkAnadirPerfil->setGeometry(QRect(530, 11, 60, 60));
        botonOkAnadirPerfil->setFont(font2);
        botonOkAnadirPerfil->setStyleSheet(QString::fromUtf8(""));
        stackedWidgetPrincipal->addWidget(AnadirPerfil);
        Perfiles2 = new QWidget();
        Perfiles2->setObjectName(QString::fromUtf8("Perfiles2"));
        labelPerfiles2 = new QLabel(Perfiles2);
        labelPerfiles2->setObjectName(QString::fromUtf8("labelPerfiles2"));
        labelPerfiles2->setGeometry(QRect(0, 0, 600, 80));
        labelPerfiles2->setFont(font);
        labelPerfiles2->setStyleSheet(QString::fromUtf8("background-color: rgb(77, 231, 0);"));
        labelPerfiles2->setAlignment(Qt::AlignCenter);
        botonAtrasPerfiles2 = new QPushButton(Perfiles2);
        botonAtrasPerfiles2->setObjectName(QString::fromUtf8("botonAtrasPerfiles2"));
        botonAtrasPerfiles2->setGeometry(QRect(10, 10, 60, 60));
        botonAtrasPerfiles2->setStyleSheet(QString::fromUtf8(""));
        botonAnadirPerfil2 = new QPushButton(Perfiles2);
        botonAnadirPerfil2->setObjectName(QString::fromUtf8("botonAnadirPerfil2"));
        botonAnadirPerfil2->setGeometry(QRect(530, 10, 60, 60));
        botonAnadirPerfil2->setFont(font);
        botonAnadirPerfil2->setStyleSheet(QString::fromUtf8(""));
        labelPerfiCarlos = new QLabel(Perfiles2);
        labelPerfiCarlos->setObjectName(QString::fromUtf8("labelPerfiCarlos"));
        labelPerfiCarlos->setGeometry(QRect(0, 80, 600, 80));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font6.setPointSize(20);
        font6.setBold(false);
        font6.setWeight(50);
        labelPerfiCarlos->setFont(font6);
        labelPerfiCarlos->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.531818, y1:1, x2:0.532, y2:0, stop:0 rgba(216, 216, 216, 255), stop:1 rgba(255, 255, 255, 255));"));
        labelPerfiCarlos->setAlignment(Qt::AlignCenter);
        labelPerfiCarlos_2 = new QLabel(Perfiles2);
        labelPerfiCarlos_2->setObjectName(QString::fromUtf8("labelPerfiCarlos_2"));
        labelPerfiCarlos_2->setGeometry(QRect(0, 160, 600, 80));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Century Schoolbook L"));
        font7.setPointSize(24);
        font7.setBold(true);
        font7.setWeight(75);
        labelPerfiCarlos_2->setFont(font7);
        labelPerfiCarlos_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.531818, y1:1, x2:0.532, y2:0, stop:0 rgba(216, 216, 216, 255), stop:1 rgba(255, 255, 255, 255));"));
        labelPerfiCarlos_2->setAlignment(Qt::AlignCenter);
        labelPerfiCarlos_3 = new QLabel(Perfiles2);
        labelPerfiCarlos_3->setObjectName(QString::fromUtf8("labelPerfiCarlos_3"));
        labelPerfiCarlos_3->setGeometry(QRect(0, 240, 600, 80));
        labelPerfiCarlos_3->setFont(font6);
        labelPerfiCarlos_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.531818, y1:1, x2:0.532, y2:0, stop:0 rgba(216, 216, 216, 255), stop:1 rgba(255, 255, 255, 255));"));
        labelPerfiCarlos_3->setAlignment(Qt::AlignCenter);
        labelPerfiCarlos_4 = new QLabel(Perfiles2);
        labelPerfiCarlos_4->setObjectName(QString::fromUtf8("labelPerfiCarlos_4"));
        labelPerfiCarlos_4->setGeometry(QRect(0, 320, 600, 80));
        labelPerfiCarlos_4->setFont(font6);
        labelPerfiCarlos_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.531818, y1:1, x2:0.532, y2:0, stop:0 rgba(216, 216, 216, 255), stop:1 rgba(255, 255, 255, 255));"));
        labelPerfiCarlos_4->setAlignment(Qt::AlignCenter);
        stackedWidgetPrincipal->addWidget(Perfiles2);
        GR->setCentralWidget(centralWidget);

        retranslateUi(GR);

        stackedWidgetPrincipal->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(GR);
    } // setupUi

    void retranslateUi(QMainWindow *GR)
    {
        GR->setWindowTitle(QApplication::translate("GR", "GR", 0, QApplication::UnicodeUTF8));
        labelTitulo->setText(QApplication::translate("GR", "GYMRAT", 0, QApplication::UnicodeUTF8));
        botonPerfiles->setText(QApplication::translate("GR", "PERFILES", 0, QApplication::UnicodeUTF8));
        botonGimnasio->setText(QApplication::translate("GR", "MI GIMNASIO", 0, QApplication::UnicodeUTF8));
        botonEjercicios->setText(QApplication::translate("GR", "EJERCICIOS", 0, QApplication::UnicodeUTF8));
        botonRutinas->setText(QApplication::translate("GR", "RUTINAS", 0, QApplication::UnicodeUTF8));
        botonResultados->setText(QApplication::translate("GR", "RESULTADOS", 0, QApplication::UnicodeUTF8));
        botonMusica->setText(QApplication::translate("GR", "M\303\232SICA", 0, QApplication::UnicodeUTF8));
        labelPerfiles->setText(QApplication::translate("GR", "PERFILES", 0, QApplication::UnicodeUTF8));
        labelAtras->setText(QString());
        botonAtrasPerfiles->setText(QApplication::translate("GR", "ATRAS", 0, QApplication::UnicodeUTF8));
        botonAnadirPerfil->setText(QApplication::translate("GR", "+", 0, QApplication::UnicodeUTF8));
        labelAnadirPerfil->setText(QApplication::translate("GR", "A\303\221ADIR PERFIL", 0, QApplication::UnicodeUTF8));
        botonAtrasAnadirPerfil->setText(QApplication::translate("GR", "ATRAS", 0, QApplication::UnicodeUTF8));
        labelGenero->setText(QApplication::translate("GR", "G\303\251nero", 0, QApplication::UnicodeUTF8));
        radioMasculino->setText(QApplication::translate("GR", "Masculino", 0, QApplication::UnicodeUTF8));
        radioFemenino->setText(QApplication::translate("GR", "Femenino", 0, QApplication::UnicodeUTF8));
        labelEdad->setText(QApplication::translate("GR", "Edad", 0, QApplication::UnicodeUTF8));
        labelAnos->setText(QApplication::translate("GR", "A\303\261os", 0, QApplication::UnicodeUTF8));
        labelPeso->setText(QApplication::translate("GR", "Peso", 0, QApplication::UnicodeUTF8));
        labelKilogramos->setText(QApplication::translate("GR", "Kilogramos", 0, QApplication::UnicodeUTF8));
        labelEstatura->setText(QApplication::translate("GR", "Estatura", 0, QApplication::UnicodeUTF8));
        labelCentimetros->setText(QApplication::translate("GR", "Cent\303\255metros", 0, QApplication::UnicodeUTF8));
        labeNombre->setText(QApplication::translate("GR", "Nombre", 0, QApplication::UnicodeUTF8));
        botonOkAnadirPerfil->setText(QApplication::translate("GR", "OK", 0, QApplication::UnicodeUTF8));
        labelPerfiles2->setText(QApplication::translate("GR", "PERFILES", 0, QApplication::UnicodeUTF8));
        botonAtrasPerfiles2->setText(QApplication::translate("GR", "ATRAS", 0, QApplication::UnicodeUTF8));
        botonAnadirPerfil2->setText(QApplication::translate("GR", "+", 0, QApplication::UnicodeUTF8));
        labelPerfiCarlos->setText(QApplication::translate("GR", "Carlos", 0, QApplication::UnicodeUTF8));
        labelPerfiCarlos_2->setText(QApplication::translate("GR", "Cristina", 0, QApplication::UnicodeUTF8));
        labelPerfiCarlos_3->setText(QApplication::translate("GR", "Alberto", 0, QApplication::UnicodeUTF8));
        labelPerfiCarlos_4->setText(QApplication::translate("GR", "Daniela", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class GR: public Ui_GR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GR_H
