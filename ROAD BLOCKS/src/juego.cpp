#include "Juego.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define KEY_UP 72 + 256
#define KEY_DOWN 80 + 256
#define KEY_RIGHT 77 + 256
#define KEY_LEFT 75 + 256

using namespace std;
Juego::Juego(){
    cout<<endl
    <<" **            **   ********  **       ****      ****    **        **  ********"<<endl
    <<" **            **   ********  **      ******    ******   ***      ***  ********"<<endl
    <<" **            **   **        **     **    **  **    **  ****    ****  **      "<<endl
    <<" **            **   **        **     **        **    **  ** **  ** **  **      "<<endl
    <<" **            **   *******   **     **        **    **  **  ****  **  ******* "<<endl
    <<" **     **     **   *******   **     **        **    **  **   **   **  ******* "<<endl
    <<" **    ****    **   **        **     **        **    **  **        **  **      "<<endl
    <<"  **  **  **  **    **        **     **    **  **    **  **        **  **      "<<endl
    <<"   ****    ****     ********  ******  ******    ******   **        **  ********"<<endl
    <<"    **      **      ********  ******   ****      ****    **        **  ********"<<endl
    <<endl<<endl<<endl
    <<"                                INGRESE SU NOMBRE "<<endl<<endl
    <<"                                   ";
    string nombre;
    cin>>nombre;
    initMatrizEstable();
    initGame();
}

int Juego::initGame(){
    initMatriz();
    bool bucle=1;
    while(bucle){
        short int nivel;
        bool validarNivel=true;
        while (validarNivel){
            cout<<endl<<endl
            <<"                               SELECIONE EL NIVEL"
            <<endl<<endl
            <<"                    1.FACIL         2.NORMAL        3.DIFICIL "
            <<endl<<endl<<"                                       ";
            cin>>nivel;
            switch (nivel){
                case 1:
                    mapaFacil();
                    imprimir();
                    posicion(&bucle);
                    validarNivel=false;
                    break;
                case 2:
                    mapaNormal();
                    imprimir();
                    posicion(&bucle);
                    validarNivel=false;
                    break;
                case 3:
                    mapaDificil();
                    imprimir();
                    posicion(&bucle);
                    validarNivel=false;
                    break;
                default:
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl
                    <<"                               NUMERO INCORRECTO "<<endl<<endl;
            }
        }
    }
    return 0;
}

int Juego::initMatrizEstable(){
    for(short int i=0;i<71;i++){
        vect[0][i]='-';
        vect[20][i]='-';
    }
    for(short int i=0;i<21;i++){
        vect[i][0]='|';
        vect[i][70]='|';
    }
    return 0;
}

int Juego::initMatriz(){
    for (short int i=1;i<20;i++){
        for (short int j=1;j<70;j++){
            vect[i][j]='.';
        }
    }
    return 0;
}

int Juego::mapaFacil(){
    vect[1][30]=vect[3][8]=vect[3][9]=vect[3][43]=vect[3][53]=vect[3][67]=vect[4][7]=vect[4][67]=vect[5][7]=
    vect[5][9]=vect[6][7]=vect[6][54]=vect[7][8]=vect[7][9]=vect[8][45]=vect[9][45]=vect[10][13]=vect[10][45]=
    vect[11][29]=vect[11][60]=vect[15][14]=vect[15][15]=vect[15][46]=vect[16][14]=vect[16][44]=vect[16][45]=
    vect[16][46]=vect[16][66]=vect[17][14]=vect[18][30]=vect[19][47]='x';

    vect[1][1]='O';//PELOTA
    vect[18][69]='#';//PUERTA
    return 0;
}

int Juego::mapaNormal(){
    vect[1][36]=vect[1][67]=vect[2][2]=vect[2][57]=vect[3][31]=vect[3][65]=vect[4][46]=vect[4][68]=
    vect[5][32]=vect[5][33]=vect[5][34]=vect[5][44]=vect[5][66]=vect[6][8]=vect[6][9]=vect[6][34]=
    vect[6][35]=vect[6][44]=vect[6][50]=vect[6][51]=vect[7][51]=vect[8][3]=vect[8][66]=vect[9][3]=
    vect[10][16]=vect[10][60]=vect[10][61]=vect[11][29]=vect[11][43]=vect[11][67]=vect[12][17]=vect[13][8]=
    vect[13][9]=vect[13][28]=vect[14][7]=vect[14][45]=vect[15][7]=vect[15][9]=vect[15][11]=vect[15][34]=
    vect[15][50]=vect[16][1]=vect[16][7]=vect[16][11]=vect[16][18]=vect[16][23]=vect[16][24]=vect[16][57]=
    vect[16][58]=vect[17][8]=vect[17][9]=vect[17][10]=vect[17][22]=vect[17][39]=vect[17][62]=vect[18][25]=
    vect[18][51]=vect[19][4]='x';

    vect[1][1]='O';//PELOTA
    vect[19][23]='#';//PUERTA
    return 0;
}

int Juego::mapaDificil(){
    vect[1][32]=vect[1][65]=vect[2][4]=vect[2][38]=vect[2][65]=vect[3][8]=vect[3][10]=vect[3][27]=vect[3][28]=vect[3][29]=
    vect[3][31]=vect[3][39]=vect[4][3]=vect[4][9]=vect[4][16]=vect[4][26]=vect[4][30]=vect[4][37]=vect[4][52]=
    vect[4][53]=vect[4][61]=vect[4][65]=vect[5][16]=vect[5][22]=vect[5][26]=vect[5][28]=vect[5][36]=vect[5][37]=
    vect[5][64]=vect[6][6]=vect[6][12]=vect[6][26]=vect[6][38]=vect[6][69]=vect[7][10]=vect[7][11]=vect[7][12]=
    vect[7][27]=vect[7][45]=vect[8][12]=vect[8][24]=vect[8][41]=vect[8][56]=vect[9][12]=vect[9][13]=vect[9][24]=
    vect[10][18]=vect[10][19]=vect[10][67]=vect[10][68]=vect[11][30]=vect[11][37]=vect[11][46]=vect[12][12]=
    vect[12][35]=vect[12][44]=vect[12][62]=vect[13][5]=vect[13][12]=vect[13][35]=vect[13][43]=vect[13][45]=
    vect[13][57]=vect[13][63]=vect[14][11]=vect[14][12]=vect[14][28]=vect[14][29]=vect[14][30]=vect[14][34]=
    vect[14][42]=vect[14][46]=vect[14][50]=vect[14][51]=vect[14][52]=vect[14][60]=vect[14][65]=vect[15][4]=
    vect[15][12]=vect[15][17]=vect[15][33]=vect[15][36]=vect[15][47]=vect[15][59]=vect[16][2]=vect[16][12]=
    vect[16][16]=vect[16][32]=vect[16][48]=vect[16][56]=vect[16][64]=vect[17][2]=vect[17][9]=vect[17][10]=
    vect[17][15]=vect[17][31]=vect[17][35]=vect[17][49]=vect[17][55]=vect[17][63]=vect[18][6]=vect[18][9]=
    vect[18][23]=vect[18][30]=vect[18][34]=vect[18][48]=vect[18][54]=vect[18][58]=vect[19][11]=vect[19][47]=
    vect[19][66]=vect[19][67]='x';

    vect[1][1]='O';//PELOTA
    vect[19][35]='#';//PUERTA
    return 0;
}

int Juego::imprimir(){
    system("cls");
    cout<<endl<<endl;
    for (short int i=0;i<21;i++){
        for (short int j=0;j<71;j++){
            if(vect[i][j]=='.')
                cout<<" ";
            else
                cout<<vect[i][j];
        }
        cout<<endl;
    }
    return 0;
}

int Juego::posicion(bool *bucle){
    short int num1;
    short int num2;
    bool validar=true;
    if (vect[1][1]=='O'){
        num1=1;num2=1;
        while (validar){
            mover(&num1,&num2,&validar,bucle);
        }
    }
    else{
        while (validar){
            mover(&num1,&num2,&validar,bucle);
        }
    }
    return 0;
}

int Juego::mover(short int *num1,short int *num2,bool *validar,bool *bucle){
    short int tecla;
    tecla=getch();
    if (tecla==0||tecla==224)
        tecla=256+getch();

    switch (tecla){
        case KEY_UP://ARRIBA
            while (vect[*num1-1][*num2]=='.'){
                vect[*num1][*num2]='.';
                *num1=*num1-1;
                vect[*num1][*num2]='O';
            }
            imprimir();
            if (vect[*num1-1][*num2]=='-'){
                gameover(bucle);
                *validar=false;
            }
            break;

        case KEY_DOWN://ABAJO
            while (vect[*num1+1][*num2]=='.'){
                vect[*num1][*num2]='.';
                *num1=*num1+1;
                vect[*num1][*num2]='O';
            }
            imprimir();
            if (vect[*num1+1][*num2]=='-'){
                gameover(bucle);
                *validar=false;
            }
            if (vect[*num1+1][*num2]=='#'){
                win(bucle);
                *validar=false;
            }
            break;

        case KEY_RIGHT://DERECHA
            while (vect[*num1][*num2+1]=='.'){
                vect[*num1][*num2]='.';
                *num2=*num2+1;
                vect[*num1][*num2]='O';
            }
            imprimir();
            if (vect[*num1][*num2+1]=='|'){
                gameover(bucle);
                *validar=false;
            }
            if (vect[*num1][*num2+1]=='#'){
                win(bucle);
                *validar=false;
            }
            break;

        case KEY_LEFT://IZQUIERDA
            while (vect[*num1][*num2-1]=='.'){
                vect[*num1][*num2]='.';
                *num2=*num2-1;
                vect[*num1][*num2]='O';
            }
            imprimir();
            if (vect[*num1][*num2-1]=='|'){
                gameover(bucle);
                *validar=false;
            }
            break;
    }
    return 0;
}

int Juego::gameover(bool *bucle){
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
    seguirJugando(bucle);
    return 0;
}

int Juego::win(bool *bucle){
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
    seguirJugando(bucle);
    return 0;
}

int Juego::seguirJugando(bool *bucle){
    cout<<endl
    <<"               PRESIONE 1 PARA SALIR O 2 PARA SEGUIR JUGANDO  "<<endl<<endl;
    short int jugar;
    cout<<"                                    ";
    cin>>jugar;
    if (jugar==1)
        *bucle=false;
    else
        initMatriz();
    return 0;
}
