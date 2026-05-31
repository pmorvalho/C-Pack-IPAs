
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define DIM 100


void apagaCaracter(char *s, char c){
    int i=0;
    while(s[i]!= '\0'){
        if(s[i]==c){
            int r = i;
            while(s[r]!= '\0'){
                s[r] = s[r+1];
                r++;
            }
        }
        else i++;
    }
}

int main(){
    char letra;
    char s[DIM];
    int i = 0;
    for( int c = getchar(); c != '\n'; c = getchar()){
        s[i++] = c;

        }
    s[i] = '\0';
    scanf("%c", &letra);
    apagaCaracter(s,letra);
    printf("%s\n", s);
    return 0;
}