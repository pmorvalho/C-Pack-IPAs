
#include <stdio.h>
#define MAX 80

int leLinha(char str[]){
    int c, contador = 0;

    while((c = getchar()) != EOF && c != '\n'){
        str[contador++] = c;
    }
    str[contador] = '\0';

    return contador;
}

int main(){
    char str[MAX];
    lelinha(str);
    printf("%s\n", str);
    return 0;
}