#include <stdio.h>
#define M1FILAS 3
#define M1COLUMNAS 3
#define M2FILAS 3
#define M2COLUMNAS 3

int print(int [M1FILAS][M1COLUMNAS]);
int multiplication(int [M1FILAS][M1COLUMNAS],int [M2FILAS][M2COLUMNAS]/*int [M1FILAS][M1COLUMNAS]*/);
void fillCero(int [M1FILAS][M2COLUMNAS]);

int main(){
    int matrix1[M1FILAS][M1COLUMNAS]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[M2FILAS][M2COLUMNAS]={{6,5,4},{9,8,7},{3,2,1}};

    print(matrix1);
    print(matrix2);
    multiplication(matrix1,matrix2);

    return 0;
}

int print(int matrix[M1FILAS][M1COLUMNAS]){
    for(int i=0;i<3;i++){
        printf(" |");
        for(int j=0;j<3;j++)
            printf("%4d ",matrix[i][j]);
        printf("| \n");
    }
    printf("\n");
}

int multiplication(int matrix1[M1FILAS][M1COLUMNAS],int matrix2[M2FILAS][M2COLUMNAS]){
    if(M1COLUMNAS!=M2FILAS)
        printf(" Las matrices no se pueden multiplicar :( ");

    else {
        int matrix3[M1FILAS][M2COLUMNAS];
        fillCero(matrix3);
        int i,j,z=0;
        for (;i<M1COLUMNAS;i++){
            for(z=0;z<M2COLUMNAS;z++){
                for (j=0;j<M2FILAS;j++)
                    matrix3[i][z]=matrix3[i][z]+(matrix1[i][j] * matrix2[j][z]);
            }
        }
        print(matrix3);
    }

    return 0;
}

void fillCero(int matrix3[M1FILAS][M2COLUMNAS]){
    for(int i=0;i<M1FILAS;i++)
        for(int j=0;j<M2COLUMNAS;j++)
            matrix3[i][j]=0;
}

