#include "Empresa.h"

Empresa::Empresa()
{
    nombreEmpresa="No se ha registrado el Nombre de la empresa";
    numeroRUC=0;
    listaDepartamento=aux=NULL;
}

Empresa::Empresa(char* nombreEmpresa,int numeroRUC)
{
    this->nombreEmpresa=nombreEmpresa;
    this->numeroRUC=numeroRUC;
    listaDepartamento=aux=NULL;
}

void Empresa::setNombreEmpresa(char* nombreEmpresa){
    this->nombreEmpresa=nombreEmpresa;
}

void Empresa::setNumeroRUC(int numeroRUC){
    this->numeroRUC=numeroRUC;
}

void Empresa::crearDepartamento(){
    char* nombreDepartamento;
    std::cout<<"Ingrese el nombre del Departamento :";
    std::cin>>nombreDepartamento;
    if(!listaDepartamento){
        listaDepartamento=new Departamento(nombreDepartamento);
        aux=listaDepartamento
    }
    else{
        aux->sigDepartamento=new Departamento(nombreDepartamento);
        aux=aux->sigDepartamento;
    }
}

void Empresa::aumento(){
    Departamento* tmp=listaDepartamento->listaTrabajadores;
    while(!tmp){
        int monto=tmp->listaTrabajadores->getSalario();
        tmp->listaTrabajadores->setSalario(monto*1.1);
        tmp=tmp->listaTrabajadores->sigFuncionario;
    }
}
