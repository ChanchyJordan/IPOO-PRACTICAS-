#include <stdio.h>


int main(){
    int num;
    bool tmp=1;
    while(tmp){
        printf ("Ingrese un numero: ");
        scanf("%d",&num);
        if(num%10==0)
            printf("El cuadrado del numero es : %d  \n",(num*num));
        printf ("Presione 0 si desea salir ");
        scanf("%d",&tmp);
    }

    return 0;
}
