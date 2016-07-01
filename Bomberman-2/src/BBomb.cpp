#include "BBomb.h"

BBomb::BBomb()
{
    state=0;
}

bool BBomb::placeBomb(int positionX,int positionY){
    state=1;
    Sleep(5);
    positionBombX=positionX;
    positionBombY=positionY;
    return 1;
}

bool BBomb::placeBomb(int* contBomb){
    cout<<*contBomb<<endl;
    if (*contBomb==5){
        state=0;
        *contBomb=0;
        return 1;
    }
    else{
        cout<<"Exploit"<<endl;
        *contBomb=*contBomb+1;
        cout<<*contBomb<<endl;
        Sleep(50);
        return 0;
    }

}

void BBomb::exploit(vector< vector<char> > matrix){


}

void BBomb::positiveTravel(int position){



}

void BBomb::negativeTravel(int){


}
