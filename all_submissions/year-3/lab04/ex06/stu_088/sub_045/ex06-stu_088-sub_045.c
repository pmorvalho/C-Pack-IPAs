
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
    int i;

    for(i = 0; i < length(s); i++){
        if('a' < s[i] < 'z')
            s[i] += ('A' - 'a');
    }
}

int main(){
    char str[MAX];
    lelinha(str);
    maiusculas(str);

    printf("%s\n", str);

    return 0;
}