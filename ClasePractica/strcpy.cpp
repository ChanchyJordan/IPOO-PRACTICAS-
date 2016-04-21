#include <stdio.h>
//ACABADO
void strcpy(char*, char*);

int main(){
    char word1[20]="Jordan Mendoza";
    char word2[20];

    strcpy(word2,word1);

    printf("%s \n",word1);
    printf("%s \n",word2);
    return 0;
}

void strcpy(char* s,char* t){
    while (*s++ = *t ++){;}
}
