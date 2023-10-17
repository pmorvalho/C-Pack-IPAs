
#include <stdio.h>
#include <string.h>

#define BUFFER 100

void apagaCaracter(char s[BUFFER], char c);
void leLinha(char s[BUFFER]);
int contaLinha(char s[BUFFER]);


int main() {

    char string[BUFFER];
    char ch;

    leLinha(string);

    scanf("%c", &ch);

    apagaCaracter(string, ch);

    printf("%s", string);
    putchar('\n');

    return 0;

}

void leLinha(char s[BUFFER]) {

    char c;
    int j = 0;

    while ((c = getchar()) != EOF) {

        if (c == '\n') {
            break;
        }

        s[j] = c;
        j++;
    }

}

int contaLinha(char s[BUFFER]) {
    
    int i;
    int contador = 0;

    for (i = 0; i < BUFFER; i++) {
        if (s[i] != '\0') {
            contador++;
        } else {
            break;
        }
    }

    return contador;
}

void apagaCaracter(char s[BUFFER], char c) {

    int i, j, k;
    k = contaLinha(s);

    for (i = 0; s[i] != '\0'; i++) {
        
        if (s[i] == c) {
            for (j = i; j < k; j++) {
                s[j] = s[j+1];

            }
        }
    }

}
