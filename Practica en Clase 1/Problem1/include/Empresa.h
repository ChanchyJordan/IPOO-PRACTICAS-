#ifndef EMPRESA_H
#define EMPRESA_H

#include "Funcionario.h"
#include "Departamento.h"

class Empresa
{
    public:
        Empresa();
        Empresa(char*,int);
        char* getNombreEmpresa(){return nombreEmpresa;}
        int getNumeroRUC(){return numeroRUC;}

        void setNombreEmpresa(char*);
        void setNumeroRUC(int);

        void crearDepartamento();
        void aumento();

    private:
        char* nombreEmpresa;
        int numeroRUC;
        Departamento* listaDepartamento;
        Departamento* aux;
};

#endif // EMPRESA_H
