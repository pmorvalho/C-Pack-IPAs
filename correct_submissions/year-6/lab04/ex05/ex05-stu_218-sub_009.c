
#include <stdio.h>
#define MAX 80

int leLinha(char s[]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0'; 

    return i; 
}


int main() {
    char linha[MAX + 1]; 

    leLinha(linha);

    puts(linha);

    return 0;
}