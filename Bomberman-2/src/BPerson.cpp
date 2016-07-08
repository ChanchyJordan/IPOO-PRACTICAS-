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

void BPerson::setX(int positionX){
    this->positionX=positionX;
}

void BPerson::setY(int positionY){
    this->positionY=positionY;
}
