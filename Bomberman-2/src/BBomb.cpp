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
    if (*contBomb==5){
        state=0;
        *contBomb=0;
        return 1;
    }
    else{
        *contBomb=*contBomb+1;
        Sleep(50);
        return 0;
    }

}
//void BBomb::exploit(vector <vector<char> >);


