

#include <stdio.h>

#define MAX 100


int leLinha(char s[]) {
    int i = 0;
    char c;

    
    while (i < MAX - 1 && (c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0'; 

    return i; 
}

int main() {
    char linha[MAX];
    int numCaracteres;

    
    numCaracteres = leLinha(linha);

    
    printf("%s\n", linha);

    return 0;
}