
#include <stdio.h>
#define MAX 80

int palindromo(char str[]);
int tamanho(char str[]);

int main(){
    char str[MAX];
    scanf("%s",str);
    printf("%s\n",palindromo(str)?"yes":"no");
    return 0;
}

int palindromo(char str[]){
    int l=0,r=tamanho(str)-1;
    while(l<r)
        if(str[l++]!=str[r--]) return 0;
    return 1;
}

int tamanho(char str[]){
    int i;
    for(i=0;str[i],i++);
    return i;
}