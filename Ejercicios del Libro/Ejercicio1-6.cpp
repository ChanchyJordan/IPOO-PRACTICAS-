# include <stdio.h>
//ACABADO
int main(){
    int c;
    c=getchar();
    while (c!=EOF){//El valor de EOF es CONTROL D
        putchar(c);
        c=getchar();
    }
    return 0;
}
