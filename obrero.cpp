#include "obrero.h"

obrero::obrero(QObject *parent) : QObject(parent)
{
    this->m_nombre ="";
    this->m_horas =0;
    this->m_jornada = TipoJornada::Matutina;

}

const QString &obrero::nombre() const
{
    return m_nombre;
}

void obrero::setNombre(const QString &newNombre)
{
    m_nombre = newNombre;
}

int obrero::horas() const
{
    return m_horas;
}

void obrero::setHoras(int newHoras)
{
    m_horas = newHoras;
}

TipoJornada obrero::jornada() const
{
    return m_jornada;
}

void obrero::setJornada(TipoJornada newJornada)
{
    m_jornada = newJornada;
}

double obrero::salarioBruto() const
{
    return m_salarioBruto;
}

void obrero::setSalarioBruto(double newSalarioBruto)
{
    m_salarioBruto = newSalarioBruto;
}

double obrero::salarioNeto() const
{
    return m_salarioNeto;
}

void obrero::setSalarioNeto(double newSalarioNeto)
{
    m_salarioNeto = newSalarioNeto;
}

double obrero::descuento() const
{
    return m_descuento;
}

void obrero::setDescuento(double newDescuento)
{
    m_descuento = newDescuento;
}

QString obrero::toString()
{
    QString str = "";
    str.append("Nombre: " + m_nombre + "\n");
    str.append("Jornada: " + jornada2String() + "\n");
    str.append("Horas: " + QString::number(m_horas) + "\n");
    str.append("Salario Bruto: $" + QString::number(m_salarioBruto) + "\n");
    str.append("Descuento: $" + QString::number(m_descuento) + "\n");
    str.append("salario Neto: " + QString::number(m_salarioNeto) + "\n");
    return str;
}


QString obrero::jornada2String()
{
    switch(m_jornada){
    case TipoJornada::Vespertina:
        return "Vespertina";
        break;
    case TipoJornada::Matutina:
        return "Matutina";
        break;
    case TipoJornada::Nocturna:
        return "Nocturna";
        break;
    default:
        return "";
    }
}

obrero::obrero(const QString &nombre, int horas, TipoJornada jornada) : m_nombre(nombre),
    m_horas(horas),
    m_jornada(jornada)
{}
