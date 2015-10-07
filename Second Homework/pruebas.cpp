#include <iostream>

using namespace std;

int main(){
    string nombre="jordan";
    char* palabra;
    palabra=&nombre[0];
    short int tam=0;
    while(*palabra){
        tam++;
        palabra++;
    }
    palabra=&nombre[0];
    cout<<tam<<endl;

    for(int i=0;i<tam;i++){
        if(*palabra=='r'){
            *palabra=0;
        }
        palabra++;
    }
    cout<<nombre<<endl;

    return 0;
}
