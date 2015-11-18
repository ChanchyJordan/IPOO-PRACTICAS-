#include "Stack.h"

using namespace std;

Stack::Stack()
{
    Base=Cima=NULL;
    init_stack();
}

Stack::~Stack()
{
    Nodo* tmp=Cima;
    while(tmp!=Base)
    {
        tmp=tmp->sig;
        delete tmp->ant;
    }
    delete Base;

}

void Stack::init_stack()
{
    int dato;
    unsigned short int alternativa;
    bool validar;
    cout<<" --------- P I L A ---------"<<endl<<endl
    <<" Agregue el primer elemento : ";
    cin>>dato;
    add_stack(dato);

    while(validar){
        cout<<endl<<" Presione : (1)Agregar  (2)Obtener un numero  (3)Imprimir  (4)SALIR   ";
        cin>>alternativa;
        switch (alternativa){
            case 1:
                cout<<" Ingrese el numero : ";
                cin>>dato;
                add_stack(dato);
                break;
            case 2:
                get_stack();
                break;
            case 3:
                print();
                break;
            case 4:
                validar=false;
                break;
            default:
                cout<<" FATAL ERROR! El numero ue usted ingreso no es correcto  "<<endl;
                break;
        }
    }
}

void Stack::add_stack(int dato)
{
    if(!Cima){
        Cima=new Nodo(dato);
        Base=Cima;
    }
    else{
        Nodo* ptr=Cima;
        Cima->sig=new Nodo(dato);
        Cima=Cima->sig;
        Cima->ant=ptr;
    }
    print();
}


void Stack::get_stack()
{
    if (Cima==Base){
        cout<<" Numero obtenido : "<<Cima->dato<<endl;
        delete Cima;

        cout<<" Inserte numeros :c "<<endl;

    }
    else{
        cout<<"  Numero obtenido : "<<Cima->dato<<endl<<endl;
        Cima=Cima->ant;
        delete Cima->sig;
        print();
    }
}

void Stack::print()
{
    Nodo* tmp=Cima;
    while(tmp!=Base){
        cout<<"   "<<tmp->dato<<endl;
        tmp=tmp->ant;
    }
    cout<<"   "<<Base->dato<<endl;

}
