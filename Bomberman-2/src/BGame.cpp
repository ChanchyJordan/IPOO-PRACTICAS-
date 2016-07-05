#include "BGame.h"
#include "BEasyMap.h"

BGame::BGame()
{
    BMenu menu;
    initGame();
}

void BGame::initGame(){
    BEasyMap e_map;
    bool validate=1;
    int tecla;
    int returns;
    int aux1;
    int aux2;
    int contBomb=0;

    while (validate){
        tecla=getch();
        if (tecla==0||tecla==224)
            tecla=256+getch();
        if (bomb.getState()==1)
            e_map.matrix[aux1][aux2]='@';



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
                    aux1=bomberman.getX();
                    aux2=bomberman.getY();
                    bomb.placeBomb(bomberman.getX(),bomberman.getY());
                }
                break;

            default:

                break;
        }
        if(bomb.getState()==1){
            if(bomb.placeBomb(&contBomb)==1){
                int i=1;
                while (i<3 && validate){
                        if(e_map.matrix[aux1+i][aux2]=='*'){//ABAJO
                            e_map.matrix[aux1+i][aux2]=' ';
                            e_map.printMap();
                        }
                        else if(e_map.matrix[aux1+i][aux2]=='^'){
                            validate=false;
                            gameOver();
                            break;
                        }
                        else if(e_map.matrix[aux1+i][aux2]=='x')
                            e_map.matrix[aux1+i][aux2]=' ';

                        else if(e_map.matrix[aux1+i][aux2]=='0')
                            i=3;
                        i++;
                }
                i=1;
                while (i<3 && validate) {
                    //cout<<" ARRIBA "<<endl;
                        if(e_map.matrix[aux1-i][aux2]=='*'){//ARRIBA
                            e_map.matrix[aux1-i][aux2]=' ';
                            e_map.printMap();
                        }
                        else if(e_map.matrix[aux1-i][aux2]=='^'){
                            validate=false;
                            gameOver();
                            break;
                        }
                        else if(e_map.matrix[aux1-i][aux2]=='x')
                            e_map.matrix[aux1-i][aux2]=' ';

                        else if(e_map.matrix[aux1-i][aux2]=='0')
                            i=3;

                        i++;
                }
                i=1;
                while (i<3 && validate){
                        //cout<<" DRECHA "<<endl;
                        if(e_map.matrix[aux1][aux2+i]=='*'){//DERECHA
                            e_map.matrix[aux1][aux2+i]=' ';
                            e_map.printMap();
                        }
                        else if(e_map.matrix[aux1][aux2+i]=='^'){
                            validate=false;
                            gameOver();
                            i=3;
                            break;
                        }
                        else if(e_map.matrix[aux1][aux2+i]=='x')
                            e_map.matrix[aux1][aux2+i]=' ';

                        else if(e_map.matrix[aux1][aux2+i]=='0')
                            i=3;
                        i++;
                }
                i=1;
                while (i<3 && validate){
                        //cout<<" IZQUIERDA "<<endl;
                        if(e_map.matrix[aux1][aux2-i]=='*'){//IZQUIERDA
                            e_map.matrix[aux1][aux2-i]=' ';
                            e_map.printMap();
                        }
                        else if(e_map.matrix[aux1][aux2-i]=='^'){
                            validate=0;
                            validate=false;
                            gameOver();
                            break;
                        }
                        else if(e_map.matrix[aux1][aux2-i]=='x')
                            e_map.matrix[aux1][aux2-i]=' ';

                        else if(e_map.matrix[aux1][aux2-i]=='0')
                            i=3;
                        i++;
                }
            }
            e_map.matrix[aux1][aux2]=' ';
        }
    }
}

void BGame::gameOver(){
    Sleep(500);
    system("cls");
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

    Sleep(500);

    system("color F0");

    cout<<"                           *                *                   *     "<<endl;
    cout<<"               *                                     *                "<<endl;
    cout<<"       *              |           *             *        *         *  "<<endl;
    cout<<"            *        -+-                 *                            "<<endl;
    cout<<"         __           |      *             *          *        *      "<<endl;
    cout<<"     ___|  |   *     _|_              *    ____    ____               "<<endl;
    cout<<"     [_]|같|__      _| |_        *    |   |....|  |....|    *     *   "<<endl;
    cout<<"        |     |   _|[] []|_    ___    |   |....|  | ___|__            "<<endl;
    cout<<"     [_]|  같 |__|_  ______|  |   |  |_|  |....|  || -- - |   *     * "<<endl;
    cout<<"        |________  |__     |  |# #|  |_|  |....|  || - -- |  _____    "<<endl;
    cout<<"     [_]| _____ |     |__[]|  |   |  |_|  |....|__|| -- - | |* * *|   "<<endl;
    cout<<"        | [___] |        |__  |# #|  |_|  |....|__|| -- -_|_|* * *|   "<<endl;
    cout<<"     [_]|       | 같        | |   |__| |__|....|  || ___|* *|* * *|   "<<endl;
    cout<<"        | _____ |           |__  #|_______|....|  | |* *|* *|* * *|   "<<endl;
    cout<<"     [_]| [___] |       같     |__|_______|__  |  | |* *|* *|* * *|   "<<endl;
    cout<<"        |       |            __|_____________|__    |* *|* *|* * *|   "<<endl;
    cout<<"     [_]| _____ |  같      _|___________________|_  |* *|* *|* * *|   "<<endl;
    cout<<"        | [___] |         |_______________________|  ______________   "<<endl;
    cout<<"      __|_______|_________|_______________________| _________________ "<<endl;
    cout<<"     |_______________________________________________________________|"<<endl;

    system("pause");

}
