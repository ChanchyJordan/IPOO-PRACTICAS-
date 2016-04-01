# include <stdio.h>

int main(){
    int letter;
    int contSpace=0;
    int contTab=0;
    int contNewLine=0;

    while((letter=getchar())!=EOF){


        if(letter==' ')
            contSpace++;
        else {
            if (letter=='\t')
                contTab++;
            else if(letter=='\n')
                contNewLine++;
        }

    }
    printf("\n El numero de espacios es: %3d \n El numero de Tabulaciones es: %3d \n El numero de Nuevas lineas es: %3d \n",contSpace,contTab,contNewLine);

    return 0;
}
