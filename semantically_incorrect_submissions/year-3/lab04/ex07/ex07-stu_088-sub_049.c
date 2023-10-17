
#include <stdio.h>
#define MAX 50


void apagaCaracter(char s[], char n){
    int c, contador = 0;

    while((c = getchar()) != EOF && c != '\n'){
        if(c != n)
            s[contador++] = c;
    }
    s[contador] = '\0';
}

int main(){
    char n, str[MAX];

    scanf("%c", &n);
    apagaCaracter(str, n);

    printf("%s\n", str);

    return 0;
}