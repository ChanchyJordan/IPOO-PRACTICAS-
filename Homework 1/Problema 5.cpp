#include <stdio.h>

bool verify(int num);

int main(){
    int num=43;
    //bool vv;
    verify(num);


    /*
    int sum=0;
    printf("nnn ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if (num%i==0)
            sum++;
    }
    if(sum==2)
    printf("Es numero primo");*
    /*int num;
    int sum=0;
    printf("Introduce un numero :");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        verify(&i);
    }
    */
    return 0;
}

bool verify(int num){

    int sum=0;
    for (int i=0;i<num;i++){
        if(num%i==2)
            sum++;
    }
    if(sum==2)
        printf("El numero es primo");
        //return 1;
    else
        printf("El numero no es primo");
        //return 0;

    return 0;
}
