

#include <stdio.h>
#include <string.h>

#define TAM 100

void apagaCaracter(char s[], char c){

    int i, j = 0;
    char novastr[TAM]; 

    for (i = 0; s[i] != '\0'; i++){
        if (s[i] != c) {
            novastr[j] = s[i];
            j++;
        }
    }
    novastr[j] = '\0';  

    strcpy(s, novastr);
}

int main(){

    char msg[TAM];
    char c;

    fgets(msg, TAM, stdin);
    scanf("%c", &c);

    apagaCaracter(msg, c);

    printf("%s", msg);

    return 0;
}