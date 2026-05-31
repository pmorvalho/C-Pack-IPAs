

#include <stdio.h>
#include <string.h>
#define MAX 80


 void maiusculas(char s[]) {

 }

 int main () {
    char linha [MAX];
    fgets (linha, MAX, stdin);
    maisculas(linha);
    printf("%s", linha);
    return 0;
 }

 void maisculas(char s[]) {
    int i,len=strlen(s);
    for(i=0; i <len; i++) {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i]+='A'-'a';
    }
 }