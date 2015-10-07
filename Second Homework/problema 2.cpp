#include <iostream>

using namespace std;

string no_repetitions(char* letra,string frase);

int main(){
    string frase;
    cin>>frase;
    char *letra;
    letra=&frase[0];
    no_repetitions(letra,frase);
    cout<<frase<<endl;
    return 0;
}

string no_repetitions(char* letra,string frase){
    //char vect[20];
    short int tam=0;
    while (*letra){
        letra++;
        tam++;
    }
    cout<<tam<<endl;

    letra=&frase[0];
    cout<<*letra<<endl;
    for (short int j=0;j<tam;j++){
        if (*letra==*(letra+j)){
            *(letra+j)=0;
        }
    }
}
