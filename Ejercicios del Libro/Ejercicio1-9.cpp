#include <stdio.h>

void check(int*);
int main(){
    int letter;

    while((letter=getchar())!=EOF){
        if(letter==' ')
            check(&letter);
        printf("%c",letter);
    }
    return 0;
}

void check(int* letter){
    int tmp;
    tmp=getchar();
    if(tmp!=' '){
        printf("%c",*letter);
        *letter=tmp;
    }
    else
        check(letter);
}
