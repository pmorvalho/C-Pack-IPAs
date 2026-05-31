
#include <stdio.h>
#define TAMANHO_MAX 80

int leLinha(char s[]);

int main(){
    char str[TAMANHO_MAX];
    leLinha(str);
    printf("%s\n",str);
    return 0;
}

int leLinha(char str[]){
    int c,i=0;
    while((c=getchar())!=EOF&&c!='\n')
        str[i++]=c;
    str[i]='\0';
    return i;
}