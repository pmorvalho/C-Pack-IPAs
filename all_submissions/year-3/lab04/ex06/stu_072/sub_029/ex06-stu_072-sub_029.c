

#include <stdio.h>
#include <string.h>

#define MAX 80

int leLinha(char s[MAX]) {

    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && strlen(s) < MAX) {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void maiusculas(char s[]){

    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] >= 'a' && s[i] <= 'z'){
            s[i] += ('Z' - 'z');
        }
    }
}

int main() {

    char linha[MAX];

    leLinha(linha);
    maiusculas(linha);
    
    printf("%s\n", linha);
    return 0;
}