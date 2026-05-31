
#include <stdio.h>
#include <string.h>
#define MAX 80


void apagaCaracter (char s[], char c){
    int i=0,j;
    while (s[i] != '\0'){
        if(s[i]==c){
            for (j=i; s[j] !='\0'; j++)
                s[j] = s[j+1];
        }
        else
            i++;
    }
}

int main(){
    char linha [MAX], c;
    fgets (linha,MAX, stdin);
    scanf("%c", &c);
    apagaCaracter (linha, c);
    printf ("%s", linha);
    return 0;
}

