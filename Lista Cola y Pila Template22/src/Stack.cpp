#include "Stack.h"

using namespace std;

template <class Tipo>

Stack<Tipo>::Stack()
{
    Base=Cima=NULL;
    init_stack();
}

template <class Tipo>

Stack<Tipo>::~Stack()
{
    Nodo<Tipo>* tmp=Cima;
    while(tmp!=Base)
    {
        tmp=tmp->sig;
        delete tmp->ant;
    }
    delete Base;

}

template <class Tipo>

void Stack<Tipo>::init_stack()
{
    Tipo dato;
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

template <class Tipo>

void Stack<Tipo>::add_stack(Tipo dato)
{
    if(!Cima){
        Cima=new Nodo<Tipo>(dato);
        Base=Cima;
    }
    else{
        Nodo<Tipo>* ptr=Cima;
        Cima->sig=new Nodo<Tipo>(dato);
        Cima=Cima->sig;
        Cima->ant=ptr;
    }
    print();
}

template <class Tipo>

void Stack<Tipo>::get_stack()
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

template <class Tipo>

void Stack<Tipo>::print()
{
    Nodo<Tipo>* tmp=Cima;
    while(tmp!=Base){
        cout<<"   "<<tmp->dato<<endl;
        tmp=tmp->ant;
    }
    cout<<"   "<<Base->dato<<endl;

}

Stack Stack::operator+Stack Pila){
    Nodo<Tipo>* ptr=Cima;
    Nodo<Tipo>* tmp=Pila.Base;
    while (tmp!=NULL){
        Cima->sig=new Nodo<Tipo>(tmp->dato);
        Cima=Cima->sig;
        Cima->ant=ptr;
        tmp=tmp->sig;
    }
}

Stack Stack::operator-(Stack Pila){
    Nodo<Tipo>* ptr=Base->sig;
    Nodo<Tipo>* tmp=Pila.Base->dato;
    while (tmp!=NULL){
        ptr->ant->dato=ptr->ant->dato - tmp->ant->dato;
        ptr=ptr->sig;
        ant=ant->sig;
    }
    Cima->dato=Cima->dato - Pila.End->dato;
}


