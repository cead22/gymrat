#ifndef GR_H
#define GR_H

#include <QMainWindow>

namespace Ui {
    class GR;
}

class GR : public QMainWindow {
    Q_OBJECT
public:
    GR(QWidget *parent = 0);
    ~GR();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::GR *ui;


private slots:
    void on_botonAnadirPerfil2_clicked();
    void on_botonAtrasPerfiles2_clicked();
    void on_botonOkAnadirPerfil_clicked();
    void on_botonAnadirPerfil_clicked();
    void on_botonAtrasAnadirPerfil_clicked();
    void on_botonAtrasPerfiles_clicked();
    void on_botonPerfiles_clicked();
};

#endif // GR_H
