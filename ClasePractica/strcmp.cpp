#include <stdio.h>
//ACABADO
int strcmp(char*,char*);

int main(){
    char* name1="Juan";
    char* name2="Juan";

    printf("%d",strcmp(name1,name2));


    return 0;
}

int strcmp(char* s,char* t){
    /*for (;*s == *t;s++,t++)
        if(*s == '\0')
            return 0;
    return *s - *t;*/
    while (*s == *t){
        switch(*s)
            case '\0':
                return 0;
        s++;
        t++;
    }
    return *s- *t;


}
