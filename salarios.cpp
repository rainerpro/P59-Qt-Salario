#include "salarios.h"
#include "ui_salarios.h"

Salarios::Salarios(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Salarios)
{
    ui->setupUi(this);
    m_controlador = new Controlador();
}

Salarios::~Salarios()
{
    delete ui;
}
void Salarios::on_cmdCalcular_clicked()
{
    QString nombre = ui->intnombre->text();
    int horas = ui->inthora->value();
    TipoJornada jornada;
    if(ui->intMatutino->isChecked()){
        jornada = TipoJornada::Matutina;
    }else if (ui->intvespertina->isChecked()){
        jornada = TipoJornada::Vespertina;
    }else {
        jornada = TipoJornada::Nocturna;
    }
    // agregar obrero al controlador
    m_controlador->agregarObrero(nombre,horas,jornada);
    //calcular
    if(m_controlador->calcularSalario()){
        ui->outresultado->appendPlainText(m_controlador->obrero()->toString());
    }
}

