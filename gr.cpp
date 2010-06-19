#include "gr.h"
#include "ui_gr.h"

GR::GR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GR)
{
    ui->setupUi(this);
    ui->stackedWidgetPrincipal->setCurrentIndex(0);
}

GR::~GR()
{
    delete ui;
}

void GR::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void GR::on_botonPerfiles_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(1);
}

void GR::on_botonAtrasPerfiles_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(0);
}

void GR::on_botonAtrasAnadirPerfil_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(1);
}

void GR::on_botonAnadirPerfil_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(2);
}

void GR::on_botonOkAnadirPerfil_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(3);
}

void GR::on_botonAtrasPerfiles2_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(0);
}

void GR::on_botonAnadirPerfil2_clicked()
{
    ui->stackedWidgetPrincipal->setCurrentIndex(2);
}
