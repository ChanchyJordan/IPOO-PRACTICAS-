#include "Queue.h"

using namespace std;

template <class Tipo>

Queue<Tipo>::Queue()
{
    Base=Cima=NULL;
    init_queue();
}

template <class Tipo>

Queue<Tipo>::~Queue()
{
    Nodo<Tipo>* tmp=Cima;
    while(tmp!=Base){
        tmp=tmp->sig;
        delete tmp->ant;
    }
    delete Base;

}

template <class Tipo>

void Queue<Tipo>::init_queue(){
    Tipo dato;
    unsigned short int alternativa;
    bool validar;
    cout<<" --------- C O L A ---------"<<endl<<endl
    <<" Agregue el primer elemento : ";
    cin>>dato;
    add_queue(dato);

    while(validar){
        cout<<endl<<" Presione : (1)Agregar  (2)Obtener un numero  (3)Imprimir  (4)SALIR   ";
        cin>>alternativa;
        switch (alternativa){
            case 1:
                cout<<" Ingrese el numero : ";
                cin>>dato;
                add_queue(dato);
                break;
            case 2:
                get_queue();
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

void Queue<Tipo>::add_queue(Tipo dato){
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

void Queue<Tipo>::get_queue()
{
    if (Cima==Base){
        cout<<" Numero obtenido : "<<Base->dato<<endl;
        delete Base;

        cout<<" Inserte numeros :c "<<endl;

    }
    else{
        cout<<"  Numero obtenido : "<<Base->dato<<endl<<endl;
        Base=Base->sig;
        delete Base->ant;
        print();
    }
}

template <class Tipo>

void Queue<Tipo>::print(){

    Nodo<Tipo>* tmp=Cima;
    while(tmp!=Base){
        cout<<"   "<<tmp->dato<<endl;
        tmp=tmp->ant;
    }
    cout<<"   "<<Base->dato<<endl;

}
