#include "Roedores.h"

Roedores::Roedores()
{
    nombre=" Nose a colocado un nombre ";
    comida=" Aun n oesta definida ";
    promedioVida=0;

}

void Roedores::movimiento(){
    std::cout<<" Yo camino como cuadrupedo"<<std::endl;
}

void Roedores::saltar(){
    std::cout<<" Nos alto alto "<<std::endl;
}

void Roedores::alimentarse(){
    std::cout<<" Yo me como verduras "<<std::endl;
}
