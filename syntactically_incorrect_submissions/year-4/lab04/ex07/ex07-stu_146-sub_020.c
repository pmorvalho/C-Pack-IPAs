

#include <stdio.h>
#include <string.h>
#define MAX 100

int leLinha(char s[]){
    char c;
    int i = 0;
    while( (c = getchar()) != EOF && c != '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void apagaCaracter(char s[], char c) {
    int i = 0, tamanho, index = 0; 
    tamanho = strlen(s);
    char s_copia[tamanho]; 

    for (i = 0; i != tamanho; i++) {
        if (s[i] != c) {
            s_copia[index] = s[i]; 
            index++;
        }
    }
    s_copia[index] = '\0';
    strcpy(s, s_copia); 
}

int main() {
    char s[MAX];
    char c;
    leLinha(s);
    scanf("%c", &c);
    apagaCaracter(s,c);
    printf("%s\n", s);
    return 0;
}