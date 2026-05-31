
#include <stdio.h>
#define TAMANHO_MAX 80

int lelinha(char str[]);
int main(){
    char str[TAMANHO_MAX];
    lelinha(str);
    printf("%s\n", str);
    return 0;
}

int lelinha(char str[]){
    int c, i=0;
    while ((c=getchar())!=EOF && c!='\n') str[i++]=c;
    str[i] = '\0';
    return i;
}