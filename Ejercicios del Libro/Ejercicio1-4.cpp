#include <stdio.h>
//ACABADO
int main(){

    int celsius;
    printf("\n  ----CONVERTIDOR DE GRADOS CELSIUS A FAHRENHEIT --- \n");
    printf("   Celsius         Fahrenheit\n\n");
    for(celsius=0;celsius<=300;celsius=celsius+20)
        printf("%8d %20.0f \n",celsius,((9.0/5.0)*celsius)+32);



    return 0;
}
