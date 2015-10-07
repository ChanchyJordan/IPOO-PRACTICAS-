#include <iostream>

using namespace std;

int main(){
    int num;
    int respuesta=1;
    cin>>num;
    for(int i=1;i<=num;i++){
        respuesta=respuesta*i;
    }
    cout<<respuesta<<endl;

    return 0;
}
