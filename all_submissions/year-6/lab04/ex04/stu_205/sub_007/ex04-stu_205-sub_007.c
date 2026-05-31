
#include <stdio.h>
#define TAMANHO_STR 80

int tamanho(char str[]);
int palindrome(char str[]);

int main(){
    char str[TAMANHO_STR];
    scanf("%s", str);
    printf("%s\n", palindrome(str)?"yes":"no");
    return 0;
}

int palindrome(char str[]){
    int l=0, r=tamanho(str)-1;
    while (l<r) if(str[l++]!=str[r--]) return 0;
    return 1;
}

int tamanho(char str[]){
    int i=0;
    while (str[i]!='\0') i++;
    return i;
}