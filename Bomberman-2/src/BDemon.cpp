#include "BDemon.h"

BDemon::BDemon(int positionX,int positionY)
{
    this->positionX=positionX;
    this->positionY=positionY;
}

int BDemon::checkMovement(int positionX,int positionY,vector< vector<char> >matrix)
{
    if(matrix[positionX][positionY]==' ') //PUEDE AVANZAR
        return 1;

    else if(matrix[positionX][positionY]=='^') // HAY UN ENEMIGO
        return 0;

    return 2;  //SI HAY CUALQUIER OTRA COSA COMO LOS MUROS
}
