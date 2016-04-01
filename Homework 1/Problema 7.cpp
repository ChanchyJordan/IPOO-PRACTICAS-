#include <stdio.h>


int main(){
    int num;
    int resultado=1;
    printf("Ingrese un numero :");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        resultado=resultado*i;
    }
    printf("El factorial del numero es: %d",resultado);




    return 0;
}
