
#include <stdio.h>
#include <string.h>

#define DIM 80

#define BOA 1
#define MAU 0
#define NADA 2

void apagaCaracter(char s[DIM], char c) {

    int i;
    int current = NADA;

    for (i = 0; s[i] != '\0'; i++) {

            if (s[i] == c) {
            current = MAU;
        }

        if (s[i] != c && s[i] != ' ') {

            if (current == NADA) {
                putchar(s[i]);
            }
            if (current == MAU) {
                putchar(s[i]);
            }
            if (current == BOA) {
            putchar(s[i]);
            }

            current = BOA;
        }
        
        if (s[i] == ' ') {

            if (current == BOA) {
                putchar(s[i]);
            }
            if (current == MAU) {
                putchar(s[i]);
            }
            current = NADA;
        }

    }

}

int main () {

    char s[DIM];
    char c;

    fgets(s, DIM, stdin);
    c = getchar();

    apagaCaracter(s, c);


    return 0;   
}