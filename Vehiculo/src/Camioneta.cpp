#include "Camioneta.h"

Camioneta::Camioneta()
{
    numberDoor=4;
    numberWheel=4;
    Motor=3.5;
    Traction=4;
    Turbo=" Repotenciado ";
    printData();
}

int Camioneta::printData(){
    cout<<" ---- CAMIONETA ----"<<endl;
    cout<<" Numero de Puertas : "<<numberDoor<<endl;
    cout<<" Numero de Ruedas : "<<numberWheel<<endl;
    cout<<" Tamaño del motor : "<<Motor<<endl;
    cout<<" Traccion : "<<Traction<<" ruedas "<<endl;
    cout<<" Turbo: "<<Turbo<<endl<<endl<<endl;
    return 0;
}

