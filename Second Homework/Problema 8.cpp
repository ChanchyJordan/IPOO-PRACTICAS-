#include <iostream>

using namespace std;

char min_may(char a){
    char b=char(a-32);
    return b;
}
int main(){
    string frase;
    cin>>frase;
    //cout<<frase;

    char *letra;
    letra=&frase[0];
    while(*letra){
        if(*letra==' '){
            *(letra+1)=min_may(*(letra+1));
        }
        letra++;
    }
    cout<<endl<<frase<<endl;
}
