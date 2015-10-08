#include <iostream>

using namespace std;

string no_repetitions(char *letra);

int main(){
    string frase;
    getline(cin,frase);
    cout<<frase;
    char *letra;
    letra=&frase[0];
    no_repetitions(&letra);
    cout<<frase<<endl;
    return 0;
}

string no_repetitions(char *letra){
    char vect[20];
    short int i;
    while(*letra){
        vect[i]=*letra;
        i++;
    }
    for(int j=0;j<20;j++){
        for(int k=j;j<20;k++){

        }
    }


/*    short int tam=0;
    while (*(letra+1)!=0){
        letra++;
        tam++;
    }
    cout<<tam<<endl;

    letra=&frase[0];
    cout<<*letra<<endl;
    for (short int j=0;j<tam-1;j++){
        if (*letra==*(letra+j)){
            *(letra+j)=0;
        }
    }

}*/
