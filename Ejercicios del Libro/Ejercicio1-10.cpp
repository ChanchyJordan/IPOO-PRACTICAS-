#include <stdio.h>

int main(){
    int letter;
    while((letter=getchar())!=EOF){
        if(letter=='\t')
            printf("/t ");
        else {
            if(letter==' \ ')
                printf("\\");
            else {
                if(letter=='\n')
                    printf("/b");
                else
                   printf("%c",letter);
            }
        }

    }

    return 0;
}
