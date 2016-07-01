#include "BGame.h"
#include "BEasyMap.h"

BGame::BGame()
{
    initGame();
}

void BGame::initGame(){
    BEasyMap e_map;
    BBomb bomb;
    bool validate=1;
    int tecla;
    int returns;
    bool aux=0;
    int contBomb=0;

    while (validate){
        tecla=getch();
        if (tecla==0||tecla==224)
            tecla=256+getch();


        switch (tecla){
            case KEY_UP://ARRIBA
                returns=bomberman.changePosition(1,e_map.matrix);
                if(returns==1){
                    e_map.matrix[bomberman.getX()+1][bomberman.getY()]=' ';
                    e_map.matrix[bomberman.getX()][bomberman.getY()]='^';
                    e_map.printMap();
                }
                else if(returns==0){
                    validate=0;
                    gameOver();

                }
                //e_map.printMap();
                break;

            case KEY_DOWN://ABAJO
                returns=bomberman.changePosition(2,e_map.matrix);
                if(returns==1){
                    e_map.matrix[bomberman.getX()-1][bomberman.getY()]=' ';
                    e_map.matrix[bomberman.getX()][bomberman.getY()]='^';
                    e_map.printMap();
                }
                else if(returns==0){
                    validate=0;
                    gameOver();
                }

                break;

            case KEY_RIGHT://DERECHA
                returns=bomberman.changePosition(3,e_map.matrix);
                if(returns==1){
                    e_map.matrix[bomberman.getX()][bomberman.getY()-1]=' ';
                    e_map.matrix[bomberman.getX()][bomberman.getY()]='^';
                    e_map.printMap();
                }
                else if(returns==0){
                    validate=0;
                    gameOver();
                }

                break;

            case KEY_LEFT://IZQUIERDA
                returns=bomberman.changePosition(4,e_map.matrix);
                if(returns==1){
                    e_map.matrix[bomberman.getX()][bomberman.getY()+1]=' ';
                    e_map.matrix[bomberman.getX()][bomberman.getY()]='^';
                    e_map.printMap();
                }
                else if(returns==0){
                    validate=0;
                    gameOver();
                }

                break;
            case 32:
                if(bomb.getState()==0){
                    cout << "Has pulsado la barra espaciadora 1\n";
                    bomb.placeBomb(bomberman.getX(),bomberman.getY());
                    cout << "Has pulsado la barra espaciadora 2\n";
                }
                break;

            default:

                break;
        }
        if(bomb.getState()==1){
            bomb.placeBomb(&contBomb);
        }

        //system("cls");
    }
}

void BGame::gameOver(){
    cout<<endl<<endl<<endl
    <<"            ************    *****    ***        ***  **********"<<endl
    <<"            ************  ********   ****      ****  **********"<<endl
    <<"            **            **     **  ** **    ** **  **        "<<endl
    <<"            **            **     **  **  **  **  **  **        "<<endl
    <<"            **    ******  *********  **   ****   **  ********* "<<endl
    <<"            **    ******  *********  **    **    **  ********* "<<endl
    <<"            **        **  **     **  **          **  **        "<<endl
    <<"            **        **  **     **  **          **  **        "<<endl
    <<"            ************  **     **  **          **  **********"<<endl
    <<"            ************  **     **  **          **  **********"<<endl<<endl

    <<"            ************  **      **  ************  *********  "<<endl
    <<"            ************  **      **  ************  ********** "<<endl
    <<"            **        **  **      **  **            **      ** "<<endl
    <<"            **        **  **      **  **            **      ** "<<endl
    <<"            **        **  **      **  **********    *********  "<<endl
    <<"            **        **  **      **  **********    *******    "<<endl
    <<"            **        **   **    **   **            **   **    "<<endl
    <<"            **        **    **  **    **            **    **   "<<endl
    <<"            ************     ****     ************  **     **  "<<endl
    <<"            ************      **      ************  **      ** "<<endl;



}
