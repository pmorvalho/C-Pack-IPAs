
#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i;
    char c;

    i = 0;  
    while (i < MAX - 1 && (c = getchar()) != '\n' && c != EOF) {
        s[i] = c;
        i++;
    }

    s[i] = '\0';
    
    return i;
}

int main() {
    char s[MAX];
    int tamanho;
    int i;

    tamanho = leLinha(s);

    for (i = 0; i < tamanho; i++) {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}