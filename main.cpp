#include "salarios.h"
#include "obrero.h"

#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Salarios w;
    w.show();

    //obrero *objObrero1 = new obrero("Juan",47,TipoJornada::Vespertina);


    return a.exec();
}
