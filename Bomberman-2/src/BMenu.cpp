#include "BMenu.h"

BMenu::BMenu()
{
    Start();
}


void BMenu::Start(){
    short int color=0;
    while (color<7){
        if (color==0){
            system("color 0C"); //NEGRO CON ROJO
            Sleep(300);
            color++;
            printBomberman();
        }
        else if (color==1){
            system("color 0E"); //NEGRO CON AMARILLO
            Sleep(300);
            color++;
            printBomberman();
        }
        else if (color==2){  //NEGRO CON VERDE
            system("color 0A");
            Sleep(300);
            color++;
            printBomberman();
        }
        else if (color==3){  //NEGRO CON VERDE
            system("color 0B");
            Sleep(300);
            color++;
            printBomberman();
        }
        else if (color==4){  //NEGRO CON VERDE
            system("color 0D");
            Sleep(300);
            color++;
            printBomberman();
        }
        else if (color==5){  //NEGRO CON VERDE
            system("color 09");
            Sleep(300);
            color++;
            printBomberman();
        }
        else{
            color=0;
            system("pause");
            while(color<4){
                printBomb1();
                printBomb2();
                color++;
            }
            color=7;
            printExploit1();
            printExploit2();
            printExploit3();
        }

    }
}
void BMenu::printBomberman(){
    system("cls");
    cout
    <<"  BBBBBBBB     OOOOOOO    MMMM       MMMM   BBBBBBBB    EEEEEEEE   BBBBBBBB    "<<endl
    <<"  BBBBBBBBB   OOOOOOOOO   MMMMM     MMMMM   BBBBBBBBB   EEEEEEEE   RRRRRRRRR   "<<endl
    <<"  BBB   BBB   OOO   OOO   MMMMMM   MMMMMM   BBB   BBB   EEE        RRR    RRR  "<<endl
    <<"  BBB   BBB   OOO   OOO   MMM MMM MMM MMM   BBB   BBB   EEE        RRR   RRR   "<<endl
    <<"  BBBBBBBB    OOO   OOO   MMM  MMMMM  MMM   BBBBBBBB    EEEEEEE    RRRRRRRR    "<<endl
    <<"  BBBBBBBB    OOO   OOO   MMM   MMM   MMM   BBBBBBBB    EEEEEEE    RRRRRRR     "<<endl
    <<"  BBB   BBB   OOO   OOO   MMM         MMM   BBB   BBB   EEE        RRR  RRR    "<<endl
    <<"  BBB   BBB   OOO   OOO   MMM         MMM   BBB   BBB   EEE        RRR   RRR   "<<endl
    <<"  BBBBBBBBB   OOOOOOOOO   MMM         MMM   BBBBBBBBB   EEEEEEEE   RRR    RRR  "<<endl
    <<"  BBBBBBBB     OOOOOOO    MMM         MMM   BBBBBBBB    EEEEEEEE   RRR    RRR  "<<endl<<endl<<endl;
    cout
    <<"              MMMM       MMMM     AAAAAAAAA     NNNN       NNN             "<<endl
    <<"              MMMMM     MMMMM    AAAAAAAAAAA    NNNNN      NNN             "<<endl
    <<"              MMMMMM   MMMMMM    AAA     AAA    NNNNNN     NNN             "<<endl
    <<"              MMM MMM MMM MMM    AAA     AAA    NNN NNN    NNN             "<<endl
    <<"              MMM  MMMMM  MMM    AAA     AAA    NNN  NNN   NNN             "<<endl
    <<"              MMM   MMM   MMM    AAAAAAAAAAA    NNN   NNN  NNN             "<<endl
    <<"              MMM         MMM    AAAAAAAAAAA    NNN    NNN NNN             "<<endl
    <<"              MMM         MMM    AAA     AAA    NNN     NNNNNN             "<<endl
    <<"              MMM         MMM    AAA     AAA    NNN      NNNNN             "<<endl
    <<"              MMM         MMM    AAA     AAA    NNN       NNNN             "<<endl<<endl;
}

void BMenu::printBomb1(){
    Sleep(300);
    system("cls");
    system("color 80");
    cout<<endl<<endl<<endl<<endl
    <<"                                         *           "<<endl
    <<"                                        *            "<<endl
    <<"                                       *             "<<endl
    <<"                                      *              "<<endl
    <<"                                      *              "<<endl
    <<"                                 |-------|           "<<endl
    <<"                               0000000000000          "<<endl
    <<"                             00000000000000000        "<<endl
    <<"                            0000000000000000000       "<<endl
    <<"                           000000000000000000000      "<<endl
    <<"                           000000000000000000000      "<<endl
    <<"                           000000000000000000000      "<<endl
    <<"                            0000000000000000000       "<<endl
    <<"                             00000000000000000        "<<endl
    <<"                               0000000000000          "<<endl
    <<"                                  0000000             "<<endl;


}

void BMenu::printBomb2(){
    Sleep(300);
    system("color 80");
    system("cls");

    cout<<endl<<endl<<endl
    <<"                                        *           "<<endl
    <<"                                       *            "<<endl
    <<"                                      *             "<<endl
    <<"                                     *              "<<endl
    <<"                                     *              "<<endl
    <<"                                 |-------|          "<<endl
    <<"                                00000000000         "<<endl
    <<"                              000000000000000       "<<endl
    <<"                            0000000000000000000     "<<endl
    <<"                           000000000000000000000    "<<endl
    <<"                          00000000000000000000000   "<<endl
    <<"                          00000000000000000000000   "<<endl
    <<"                          00000000000000000000000   "<<endl
    <<"                          00000000000000000000000   "<<endl
    <<"                           000000000000000000000    "<<endl
    <<"                             00000000000000000      "<<endl
    <<"                               0000000000000        "<<endl
    <<"                                  0000000           "<<endl;
}

void BMenu::printExploit1(){
    system("color 86");
    system("cls");

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl


    <<"                                      *           "<<endl
    <<"                                  *   *   *       "<<endl
    <<"                                   ** * **        "<<endl
    <<"                                *************     "<<endl
    <<"                                   ** * **        "<<endl
    <<"                                  *   *   *       "<<endl
    <<"                                      *           "<<endl;
    Sleep(300);
}

void BMenu::printExploit2(){
    system("color 8E");
    system("cls");

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl
    <<"                                     *           "<<endl
    <<"                             *       *       *    "<<endl
    <<"                              **    ***    **      "<<endl
    <<"                               ***  ***  ***       "<<endl
    <<"                                ***********        "<<endl
    <<"                           *********************     "<<endl
    <<"                                ***********        "<<endl
    <<"                               ***  ***   ***       "<<endl
    <<"                              **    ***     **      "<<endl
    <<"                             *       *       *    "<<endl
    <<"                                     *           "<<endl;
    Sleep(300);
}

void BMenu::printExploit3(){
    system("color 8E");
    system("cls");

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl
    <<"                                     *             **          "<<endl
    <<"                       **           ***          ***           "<<endl
    <<"                        ***         ***        ****            "<<endl
    <<"                         *****     *****     *****             "<<endl
    <<"                          ******  *******  ******              "<<endl
    <<"                           *********************               "<<endl
    <<"                            *******************                "<<endl
    <<"                          ***********************              "<<endl
    <<"                       *****************************           "<<endl
    <<"                  ***************************************      "<<endl
    <<"                       *****************************           "<<endl
    <<"                          ***********************              "<<endl
    <<"                            *******************                "<<endl
    <<"                           *********************               "<<endl
    <<"                          ******  *******  ******              "<<endl
    <<"                         *****     *****     *****             "<<endl
    <<"                        ****        ***        ****            "<<endl
    <<"                       ***          ***          ***           "<<endl
    <<"                      **             *             **          "<<endl;

    Sleep(300);
}

