#include <iostream>

using namespace std;
//template<class tipo>
template<typename tipo>
tipo menor(tipo a,tipo b){
    if (a<b){
        cout<<"Menor : "<<a<<endl;
    }
    else
        cout<<"Menor : "<<b<<endl;
};

int main(){
    char a,b;
    cout<<" valor 1 :";
    cin>>a;
    cout<<" valor 2 :";
    cin>>b;

    menor(a,b);
    return 0;
}
