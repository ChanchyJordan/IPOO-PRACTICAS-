#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include "Empresa.h"

class Funcionario
{
    public:
        Funcionario();
        Funcionario(char*,int,char*);
        char* getNombre(){return nombre;}
        int getSalario(){return salario;}
        char* getIngreso(){return fechaIngreso;}
        //Funcionario* getSig(){return sigFuncionario;}

        void setNombre(char*);
        void setSalario(int);
        void setIngreso(char*);

    private:
        Funcionario* sigFuncionario;
        char* nombre;
        int salario;
        char* fechaIngreso;
        friend class Empresa;
        friend class Departamento;
};

#endif // FUNCIONARIO_H
