#include <stdio.h>
#define M1FILAS 3
#define M1COLUMNAS 3
#define M2FILAS 3
#define M2COLUMNAS 3

int print(int [M1FILAS][M1COLUMNAS]);
int multiplication(int [M1FILAS][M1COLUMNAS],int [M1FILAS][M1COLUMNAS]);

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
        printf(" | ");
        for(int j=0;j<3;j++)
            printf("%d ",matrix[i][j]);
        printf("| \n");
    }
    printf("\n");
}

int multiplication(int matrix1[M1FILAS][M1COLUMNAS],int matrix2
[M1FILAS][M1COLUMNAS])



