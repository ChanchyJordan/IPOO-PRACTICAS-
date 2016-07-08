 #include "BGame.h"
#include "BEasyMap.h"

BGame::BGame()
{

    srand(time(0));
    menu.start();
    initGame();
    win();
}

bool BGame::initGame(){
    BEasyMap e_map;
    /*else if(numMap==2)
        BNormalMap e_map;
    else if(numMap==3)
        BDifucltMap e_map;
    */
    bool validate=1;
    int tecla;
    int returns;
    int aux1;
    int aux2;
    int contBomb=0;
    int random;
    int contPoint=0;

    while (validate && e_map.listDemon.size()>0){
        tecla=getch();
        if (tecla==0||tecla==224)
            tecla=256+getch();
        if (bomb.getState()==1)
            e_map.matrix[aux1][aux2]='@';

        for(unsigned i=0;i<e_map.getTamList();i++){
            //cout<<"iteracion : "<<i<<endl;
            //cout<<e_map.getTamList()+1<<endl;
            random=generateNum();
            //cout<<"numero random : "<<random<<endl;
            switch(random){
                case 1:
                    //cout<<" ARRIBA "<<endl;
                    //cout<< returns=e_map.listDemon[i].changePosition(1,e_map.matrix) <<endl;
                    returns=e_map.listDemon[i].changePosition(1,e_map.matrix);
                    if(returns==1){
                        e_map.matrix[e_map.listDemon[i].getX()+1][e_map.listDemon[i].getY()]=' ';
                        e_map.matrix[e_map.listDemon[i].getX()][e_map.listDemon[i].getY()]='x';
                        //e_map.printMap();
                    }
                    else if(returns==0){
                        validate=0;
                        gameOver(&contPoint);
                    }
                    break;
                case 2:
                    //cout<<" ABAJO "<<endl;
                    //cout<<e_map.listDemon[i].changePosition(3,e_map.matrix)<<endl;
                    returns=e_map.listDemon[i].changePosition(2,e_map.matrix);
                    if(returns==1){
                        e_map.matrix[e_map.listDemon[i].getX()-1][e_map.listDemon[i].getY()]=' ';
                        e_map.matrix[e_map.listDemon[i].getX()][e_map.listDemon[i].getY()]='x';
                        //e_map.printMap();
                    }
                    else if(returns==0){
                        validate=0;
                        gameOver(&contPoint);
                    }
                    break;
                case 3:
                    //cout<<" DERECHA "<<endl;
                    //cout<<e_map.listDemon[i].changePosition(3,e_map.matrix)<<endl;
                    returns=e_map.listDemon[i].changePosition(3,e_map.matrix);
                    if(returns==1){
                        e_map.matrix[e_map.listDemon[i].getX()][e_map.listDemon[i].getY()-1]=' ';
                        e_map.matrix[e_map.listDemon[i].getX()][e_map.listDemon[i].getY()]='x';
                        //e_map.printMap();
                    }
                    else if(returns==0){
                        validate=0;
                        gameOver(&contPoint);
                    }
                    break;

                case 4:
                    //cout<<" IZQUIERDA "<<endl;
                    //cout<<e_map.listDemon[i].changePosition(4,e_map.matrix)<<endl;
                    returns=e_map.listDemon[i].changePosition(4,e_map.matrix);
                    if(returns==1){
                        e_map.matrix[e_map.listDemon[i].getX()][e_map.listDemon[i].getY()+1]=' ';
                        e_map.matrix[e_map.listDemon[i].getX()][e_map.listDemon[i].getY()]='x';
                        //e_map.printMap();
                    }
                    else if(returns==0){
                        validate=0;
                        gameOver(&contPoint);
                    }
                    break;
            }
            //e_map.printMap();
        }
        e_map.printMap();
        returns=0;
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
                    gameOver(&contPoint);

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
                    gameOver(&contPoint);
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
                    gameOver(&contPoint);
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
                    gameOver(&contPoint);
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
        //BOMBA
        if(bomb.getState()==1){
            if(bomb.placeBomb(&contBomb)==1){
                int i=1;
                while (i<3 && validate){
                        if(e_map.matrix[aux1+i][aux2]=='*'){//ABAJO
                            e_map.matrix[aux1+i][aux2]=' ';
                            e_map.printMap();
                            contPoint++;
                        }
                        else if(e_map.matrix[aux1+i][aux2]=='^'){
                            validate=false;
                            gameOver(&contPoint);
                            break;
                        }
                        else if(e_map.matrix[aux1+i][aux2]=='x'){
                            e_map.matrix[aux1+i][aux2]=' ';
                            e_map.eliminateDemon(aux1+i,aux2);
                        }
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
                            contPoint++;
                        }
                        else if(e_map.matrix[aux1-i][aux2]=='^'){
                            validate=false;
                            gameOver(&contPoint);
                            break;
                        }
                        else if(e_map.matrix[aux1-i][aux2]=='x'){
                            e_map.matrix[aux1-i][aux2]=' ';
                            e_map.eliminateDemon(aux1-i,aux2);
                        }

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
                            contPoint++;
                        }
                        else if(e_map.matrix[aux1][aux2+i]=='^'){
                            validate=false;
                            gameOver(&contPoint);
                            i=3;
                            break;
                        }
                        else if(e_map.matrix[aux1][aux2+i]=='x'){
                            e_map.matrix[aux1][aux2+i]=' ';
                            e_map.eliminateDemon(aux1,aux2+i);
                        }
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
                            contPoint++;
                        }
                        else if(e_map.matrix[aux1][aux2-i]=='^'){
                            validate=0;
                            validate=false;
                            gameOver(&contPoint);
                            break;
                        }
                        else if(e_map.matrix[aux1][aux2-i]=='x'){
                            e_map.matrix[aux1][aux2-i]=' ';
                            e_map.eliminateDemon(aux1,aux2-i);
                        }
                        else if(e_map.matrix[aux1][aux2-i]=='0')
                            i=3;
                        i++;
                }
            }
            e_map.matrix[aux1][aux2]=' ';
        }
    }
}

int BGame::generateNum(){
    int a;
    //srand(time(0));
    a=rand()%4+1;
    return a;


}
void BGame::gameOver(int* contPoint){
    Sleep(500);
    system("cls");
    cout<<endl
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
    //system("color 8D");
    cout<<endl<<endl<<"                                 PUNTAJE "<<*contPoint<<endl;
    Sleep(3000);
    system("pause");



    system("cls");
    system("color 08");
    cout<<endl<<endl;
    cout<<"                              *                *                   *     "<<endl;
    cout<<"                  *                                     *                "<<endl;
    cout<<"          *              |           *             *        *         *  "<<endl;
    cout<<"               *        -+-                 *                            "<<endl;
    cout<<"            __           |      *             *          *        *      "<<endl;
    cout<<"        ___|  |   *     _|_              *    ____    ____               "<<endl;
    cout<<"        [_]|#|__      _| |_      *       |   |....|  |....|    *     *   "<<endl;
    cout<<"           |     |   _|[] []|_    ___    |   |....|  | ___|__            "<<endl;
    cout<<"        [_]|  ¡Æ |__|_  ______|  |   |  |_|  |....|  || -- - |   *     * "<<endl;
    cout<<"           |________  |__     |  |# #|  |_|  |....|  || - -- |  _____    "<<endl;
    cout<<"        [_]| _____ |     |__[]|  |   |  |_|  |....|__|| -- - | |* * *|   "<<endl;
    cout<<"           | [___] |        |____|# #|  |_|  |....|__|| -- -_|_|* * *|   "<<endl;
    cout<<"        [_]|       | ° ° ° °  |  |   |__| |__|....|  || ___|* *|* * *|   "<<endl;
    cout<<"           | _____ | ° ° ° °   |__  #|_______|....|  | |* *|* *|* * *|   "<<endl;
    cout<<"        [_]| [___] | ° ° ° °      |__|_______|__  |  | |* *|* *|* * *|   "<<endl;
    cout<<"           |       | ° ° ° °    __|_____________|__    |* *|* *|* * *|   "<<endl;
    cout<<"        [_]| _____ | ° ° ° °  _|___________________|_  |* *|* *|* * *|   "<<endl;
    cout<<"           | [___] |         |_______________________|  ______________   "<<endl;
    cout<<"         __|_______|_________|_______________________| _________________ "<<endl;
    cout<<"        |_______________________________________________________________|"<<endl;

    system("pause");

}

void BGame::win(){
    system("color B0");
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl
    <<"                                       ^                                      "<<endl
    <<"                                      ^^^                                     "<<endl
    <<" ------------------------------------^^^^^------------------------------------"<<endl
    <<" -----------------------------------------------------------------------------"<<endl<<endl
    <<"                 **                 **  ********  ***        **               "<<endl
    <<"                 **                 **  ********  ****       **               "<<endl
    <<"                 **                 **     **     ** **      **               "<<endl
    <<"                 **                 **     **     **  **     **               "<<endl
    <<"                 **                 **     **     **   **    **               "<<endl
    <<"                 **       ***       **     **     **    **   **               "<<endl
    <<"                  **     *****     **      **     **     **  **               "<<endl
    <<"                   **   **   **   **       **     **      ** **               "<<endl
    <<"                    *****     *****     ********  **       ****               "<<endl
    <<"                     ***       ***      ********  **        ***               "<<endl<<endl
    <<" -----------------------------------------------------------------------------"<<endl
    <<" ------------------------------------vvvvv------------------------------------"<<endl
    <<"                                      vvv                                     "<<endl
    <<"                                       v                                      "<<endl<<endl;

    Sleep(5000);
    system("cls");
    system("color 08");
    cout<<endl<<endl;
    cout<<"                              *                *                   *     "<<endl;
    cout<<"                  *                                     *                "<<endl;
    cout<<"          *              |           *             *        *         *  "<<endl;
    cout<<"               *        -+-                 *                            "<<endl;
    cout<<"            __           |      *             *          *        *      "<<endl;
    cout<<"        ___|  |   *     _|_              *    ____    ____               "<<endl;
    cout<<"        [_]|#|__      _| |_      *       |   |....|  |....|    *     *   "<<endl;
    cout<<"           |     |   _|[] []|_    ___    |   |....|  | ___|__            "<<endl;
    cout<<"        [_]|  ¡Æ |__|_  ______|  |   |  |_|  |....|  || -- - |   *     * "<<endl;
    cout<<"           |________  |__     |  |# #|  |_|  |....|  || - -- |  _____    "<<endl;
    cout<<"        [_]| _____ |     |__[]|  |   |  |_|  |....|__|| -- - | |* * *|   "<<endl;
    cout<<"           | [___] |        |____|# #|  |_|  |....|__|| -- -_|_|* * *|   "<<endl;
    cout<<"        [_]|       | ° ° ° °  |  |   |__| |__|....|  || ___|* *|* * *|   "<<endl;
    cout<<"           | _____ | ° ° ° °   |__  #|_______|....|  | |* *|* *|* * *|   "<<endl;
    cout<<"        [_]| [___] | ° ° ° °      |__|_______|__  |  | |* *|* *|* * *|   "<<endl;
    cout<<"           |       | ° ° ° °    __|_____________|__    |* *|* *|* * *|   "<<endl;
    cout<<"        [_]| _____ | ° ° ° °  _|___________________|_  |* *|* *|* * *|   "<<endl;
    cout<<"           | [___] |         |_______________________|  ______________   "<<endl;
    cout<<"         __|_______|_________|_______________________| _________________ "<<endl;
    cout<<"        |_______________________________________________________________|"<<endl;

    system("pause");


}
