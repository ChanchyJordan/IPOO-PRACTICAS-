#include "BMan.h"

BMan::BMan()
{
    positionX=positionY=1;
}

int BMan::checkMovement(int positionX,int positionY,vector< vector<char> >matrix)
{
    if(matrix[positionX][positionY]==' ') //PUEDE AVANZAR
        return 1;

    else if(matrix[positionX][positionY]=='x') // HAY UN ENEMIGO
        return 0;

    return 2;  //SI HAY CUALQUIER OTRA COSA COMO LOS MUROS
}

