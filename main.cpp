#include "salarios.h"
#include "obrero.h"
#include"controlador.h"
#include <QApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Salarios w;
    w.show();

    //obrero *objObrero1 = new obrero("Juan",47,TipoJornada::Vespertina);

<<<<<<< HEAD
    Controlador *obj= new Controlador();
=======
   /* Controlador *obj= new Controlador();
>>>>>>> c540aad (version 1.0)

    obj->agregarObrero("Juan",40, TipoJornada::Matutina);
    if(obj->calcularSalario()){
        qDebug() << obj->obrero()->toString();
            }else{
                qDebug() << "No se pudo realizar el cálculo de salarios";
<<<<<<< HEAD
            }
=======
            }*/
>>>>>>> c540aad (version 1.0)

    return a.exec();
}
