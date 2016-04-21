#include <stdio.h>

int main(){
    int tam;//=6
    int tmp=0;
    char* letter="asasasasa";
    char *word=letter;
    for(tam=0; *word!='\0';word++,tam++){}
    word=letter;

    for(int i=0;i<=(tam/2);i++){
        if(*(word+i)!=*(word+tam-i-1))
            tmp++;
        word=letter;
    }
    if(tmp==0)
        printf("Si es palindrome");
    else
        printf("No es palindrome ");

    return 0;
}
