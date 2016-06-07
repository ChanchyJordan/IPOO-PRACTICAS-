#ifndef ROEDORES_H
#define ROEDORES_H

#include<iostream>

class Roedores
{
    public:
        Roedores();

        char* getNombre(){return nombre;}
        char* getComida(){return comida;}
        int getPromedioVida(){return promedioVida;}
        const char* getTipoAnimal(){return tipoAnimal;}
        const bool getBigotes(){return bigotes;}

        virtual void movimiento();
        virtual void saltar();
        virtual void alimentarse();

    protected:
        char* nombre;
        char* comida;
        int promedioVida;
        const bool bigotes=true;
        const char* tipoAnimal=" Mamifero ";
};

#endif // ROEDORES_H
