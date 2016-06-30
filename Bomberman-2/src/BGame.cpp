#include "BGame.h"
#include "BEasyMap.h"

BGame::BGame()
{
    initGame();
}

void BGame::initGame(){
    BEasyMap e_map;
    bool validate=1;
    short int tecla;
    while (validate){
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
        //system("cls");
    }
}
