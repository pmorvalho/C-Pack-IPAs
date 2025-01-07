

#include <stdio.h>
#include <ctype.h>
#define MAX 80

void maisculas(char s[]) {
    int i;
    char c;
    while ((c = s[i] != '\0')) {
        if (c >= 'a' && c <= 'z') {
            s[i] = c - 32;
        }
        i++;
    }

}

int lelinha(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar())!= '\n' && c!= EOF) {
        s[i++] = c;
    }
    s[i] = '\0';
    return i;
}
int main() {
    char palavra[MAX];
    char linha[MAX];
    int i;
    
    int numCarateres = lelinha(linha);
    for (i = 0; i < numCarateres; i++) {
        palavra[i] = linha[i];
    }
    maisculas(palavra);

    printf("%s\n", palavra);

    return 0;
}

