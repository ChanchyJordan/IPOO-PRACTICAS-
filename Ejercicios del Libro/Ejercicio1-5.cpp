# include <stdio.h>
//ACABADO
int main(){

    int fahr;
    printf("\n  ----CONVERTIDOR DE GRADOS FAHRENHEIT A CELSIUS--- \n");
    printf("   Celsius           Fahrenheit\n\n");
    for(fahr=300;fahr>=0;fahr=fahr-20)
        printf("%8d %20.2f \n",fahr,(5.0/9.0)*(fahr-32));



    return 0;
}

