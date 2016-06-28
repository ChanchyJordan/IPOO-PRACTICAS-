#include "BGame.h"

BGame::BGame()
{

}

void BGame::initGame(){
    short int tecla;
    tecla=getch();
    if (tecla==0||tecla==224)
        tecla=256+getch();

     switch (tecla){
        case KEY_UP://ARRIBA
            std::cout<<" ARRIBA "<<std::endl;
            break;

        case KEY_DOWN://ABAJO
            std::cout<<" ABAJO "<<std::endl;
            break;

        case KEY_RIGHT://DERECHA
            std::cout<<" DERECHA "<<std::endl;
            break;

        case KEY_LEFT://IZQUIERDA
            std::cout<<" IZQUIERDA  "<<std::endl;
            break;
    }
    system("cls");
}
