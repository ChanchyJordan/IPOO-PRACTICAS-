#include "Departamento.h"


Departamento::Departamento()
{
    sigDepartamento=NULL;
    listaTrabajadores=aux=NULL;
}

Departamento::Departamento(char* nombreDeparamento){
    this->nombreDepartamento=nombreDepartamento;
    sigDepartamento=NULL;
    listaTrabajadores=aux=NULL;
}

void Departamento::crearFuncionario(){
    char* nombre;
    int salario;
    char* fechaIngreso;
    std::cout<<"Ingrese el nombre de funcionario :";
    std::cin>>nombre;
    std::cout<<"Ingrese el salario de funcionario :";
    std::cin>>salario;
    std::cout<<"Ingrese la fecha de Ingreso del funcionario :";
    std::cin>>fechaIngreso;

    if(!listaTrabajadores){
        listaTrabajadores=new Funcionario(nombre,salario,fechaIngreso);
        aux=listaTrabajadores;
    }
    else{
        aux->sigFuncionario=new Funcionario(nombre,salario,fechaIngreso);
        aux=aux->sigFuncionario;
    }




}
