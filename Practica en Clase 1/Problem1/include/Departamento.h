#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "Funcionario.h"


class Departamento
{
    public:
        Departamento();
        Departamento(char*);
        void crearFuncionario();

    private:
        char* nombreDepartamento;
        Departamento* sigDepartamento;
        Funcionario* listaTrabajadores;
        Funcionario* aux;

        friend class Empresa;
};

#endif // DEPARTAMENTO_H
