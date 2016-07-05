#include "BPerson.h"

BPerson::BPerson()
{
    //positionX=positionY=1;

}

int BPerson::changePosition(int direction,vector< vector<char> >matrix){
    int checkMove;
    switch (direction){
        case 1: //ARRIBA
            checkMove=checkMovement(positionX-1,positionY,matrix);
            if(checkMove==1){
                positionX=positionX-1;
                return 1;
            }
            else if(checkMove==0)
                    return 0;
            return 2;
            break;

        case 2:  //ABAJO
            checkMove=checkMovement(positionX+1,positionY,matrix);
            if(checkMove==1){
                positionX=positionX+1;
                return 1;
            }
            else if(checkMove==0)
                    return 0;
            return 2;
            //cout<<"hola abajo"<<endl;
            break;

        case 3:  //DERECHA
            checkMove=checkMovement(positionX,positionY+1,matrix);
            if(checkMove==1){
                positionY=positionY+1;
                return 1;
            }
            else if(checkMove==0)
                    return 0;
            return 2;
            break;
        case 4:  //IZQUIERDA
            checkMove=checkMovement(positionX,positionY-1,matrix);
            if(checkMove==1){
                positionY=positionY-1;
                return 1;
            }
            else if(checkMove==0)
                    return 0;
            return 2;
            break;

    }
    return 0;
}
/*
int BPerson::checkMovement(int positionX,int positionY,vector< vector<char> >matrix)
{
    if(matrix[positionX][positionY]==' ') //PUEDE AVANZAR
        return 1;

    else if(matrix[positionX][positionY]=='#') // HAY UN ENEMIGO
        return 0;

    return 2;  //SI HAY CUALQUIER OTRA COSA COMO LOS MUROS
}*/
