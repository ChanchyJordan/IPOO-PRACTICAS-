#include "Deportivo.h"

Deportivo::Deportivo()
{
    numberWheel=4;
    numberDoor=2;
    Motor=2.0;
    Belleza=" Muy Elaborada ";
    Altura=1.50;
    printData();
}

int Deportivo::printData(){
    cout<<" ---- DEPORTIVO ----"<<endl;
    cout<<" Numero de Puertas : "<<numberDoor<<endl;
    cout<<" Numero de Ruedas : "<<numberWheel<<endl;
    cout<<" Tamaño del motor : "<<Motor<<endl;
    cout<<" Carroceria : "<<Belleza<<endl;
    cout<<" Altura de carro menor a : "<<Altura<<endl<<endl;
    return 0;
}
