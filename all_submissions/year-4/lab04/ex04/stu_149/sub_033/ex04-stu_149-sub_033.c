
#include <stdio.h>
#include <string.h>
#define MAX 80

int is_pali(char s[MAX]) {
    int esquerda, direita, i;
    esquerda = 0;
    direita = strlen(s)-1;
    for (i=0; i < strlen(s)/2 ;i++) {
        if(s[esquerda++]==s[direita--]) {


        } else{
            return 0;
        }

    } return 1;
}


int main(){
    char s[MAX],p;
    scanf("%s",s);
    p=is_pali(s);
    if(p) {
        printf("yes\n");
    } else{
        printf("no\n");
    }
    return 0;
}