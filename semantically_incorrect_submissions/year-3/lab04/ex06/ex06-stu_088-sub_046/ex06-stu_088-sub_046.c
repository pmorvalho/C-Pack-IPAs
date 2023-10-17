
#include <stdio.h>
#include <string.h>
#define MAX 80

int leLinha(char str[]){
    int c, contador = 0;

    while((c = getchar()) != EOF && c != '\n'){
        str[contador++] = c;
    }
    str[contador] = '\0';

    return contador;
}


void maiusculas(char s[]){
    int i, comprimento;

    comprimento = strlen(s);

    for(i = 0; i < comprimento; i++){
        if('a' < s[i] && s[i]< 'z')
            s[i] += ('A' - 'a');
    }
}

int main(){
    char str[MAX];
    leLinha(str);
    maiusculas(str);

    printf("%s\n", str);

    return 0;
}