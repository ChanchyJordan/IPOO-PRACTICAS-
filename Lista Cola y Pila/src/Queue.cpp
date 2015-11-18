#include "Queue.h"

using namespace std;

Queue::Queue()
{
    Base=Cima=NULL;
    init_queue();
}

Queue::~Queue()
{
    Nodo* tmp=Cima;
    while(tmp!=Base){
        tmp=tmp->sig;
        delete tmp->ant;
    }
    delete Base;

}


void Queue::init_queue(){
    int dato;
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

void Queue::add_queue(int dato){
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


void Queue::get_queue()
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

void Queue::print(){

    Nodo* tmp=Cima;
    while(tmp!=Base){
        cout<<"   "<<tmp->dato<<endl;
        tmp=tmp->ant;
    }
    cout<<"   "<<Base->dato<<endl;

}
