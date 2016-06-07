#include "Funcionario.h"

Funcionario::Funcionario(){
    nombre="No se ha registrado su Nombre";
    salario=0;
    fechaIngreso="No se ha registrado Fecha de Ingreso";
    sigFuncionario=NULL;
}
Funcionario::Funcionario(char* nombre,int salario,char* fechaIngreso)
{
    this->nombre=nombre;
    this->salario=salario;
    this->fechaIngreso=fechaIngreso;
    sigFuncionario=NULL;
}

void Funcionario::setNombre(char* nombre){
    this->nombre=nombre;
}

void Funcionario::setSalario(int salario){
    this->salario=salario;
}

void Funcionario::setIngreso(char* fechaIngreso){
    this->fechaIngreso=fechaIngreso;
}
