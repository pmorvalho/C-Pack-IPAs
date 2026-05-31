
#include <stdio.h>
#include <string.h>
#define TAMANHO_MAX 80

int palindromo(char str[]);

int main(){
    char str[TAMANHO_MAX];
    scanf("%s",str);
    printf("%s\n",palindromo(str)?"yes":"no");
    return 0;
}
int tamanho(char str[]);

int palindromo(char str[]){
    int l=0,r=tamanho(str)-1;
    while (l<r){
        if (str[l++]!=str[r--])
            return 0;
    }
    return 1;
}

int tamanho(char str[]){
    int i=0;
    while (str[i]!=0)
        i++;
    return i;
}