
#include <stdio.h>
#define MAX 50



void leLinha(char s[]){
    int c, contador = 0;

    while((c = getchar()) != EOF && c != '\n'){
        s[contador++] = c;
    }
    s[contador] = '\0';
}


void apagaCaracter(char s[], char n){
    int i = 0, contador = 0;

    while(s[i + contador] != '\0'){
        if(s[i + contador] == n){
            contador++;
            s[i] = s[i + contador];
        }
        else{
            s[i] = s[i + contador];
            i++;
        }
    }
    s[i] = '\0';
}

int main(){
    char n, str[MAX];

    leLinha(str);
    scanf("%c", &n);
    apagaCaracter(str, n);

    printf("%s\n", str);

    return 0;
}