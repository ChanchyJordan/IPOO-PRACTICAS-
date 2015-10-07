#include <iostream>

using namespace std;

int main(){
    int matr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    cout<<**matr<<"   1"<<endl;
    cout<<*(*(matr+1)+2)<<"   7"<<endl;
    cout<<*(matr[2]+3)<<"    12"<<endl;
    cout<<(*(matr+2))[2]<<"    11"<<endl;
    cout<<*((*matr)+1)<<"    5"<<endl;
    return 0;
}
