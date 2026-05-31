
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define DIM 100

void maiusculas(char *s){
    int i = 0;
    while(s[i] != '\0'){
        if(islower(s[i])){
            s[i] = s[i] -32;
        }
        i++;
    }

}


int main(){

    char s[DIM];
    int i = 0;
    for( int c = getchar(); c != '\n'&& c != EOF; c = getchar()){
        s[i++] = c;

        }
    s[i] = '\0';

    maiusculas(s);

    printf("%s\n", s);
    return 0;

}