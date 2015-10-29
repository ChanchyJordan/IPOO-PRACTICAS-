#include "Sedan.h"

Sedan::Sedan()
{
    numberDoor=4;
    numberWheel=4;
    Motor=1,0;
    Comodidad=" Muy buena ";
    Ligereza=" Ligero ";
    printData();
}

int Sedan::printData(){
    cout<<" ---- SEDAN ----"<<endl;
    cout<<" Numero de Puertas : "<<numberDoor<<endl;
    cout<<" Numero de Ruedas : "<<numberWheel<<endl;
    cout<<" Tamaño del motor : "<<Motor<<endl;
    cout<<" Comodidad : "<<Comodidad<<endl;
    cout<<" Forma de manejo : "<<Ligereza<<endl<<endl<<endl;
    return 0;
}

