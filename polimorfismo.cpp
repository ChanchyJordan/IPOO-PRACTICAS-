#include <iostream>

using namespace std;

int jugar(int* num);
int jugar(string* name);
int jugar(string* name,string* surname);

int main(){
    int num=19;
    string name="JORDAN";
    string surname=" MENDOZA";
    //jugar(&name,&surname);
    jugar(&num);
    jugar(&name);

    return 0;
}

int jugar(int* num){
    cout<<*num<<endl;
    return 0;
}

int jugar(string* name){
    cout<<*name<<endl;
    return 0;
}

int jugar(string* name,string* surname){
    cout<<*name<<"  "<<*surname<<endl;
    return 0;
}
