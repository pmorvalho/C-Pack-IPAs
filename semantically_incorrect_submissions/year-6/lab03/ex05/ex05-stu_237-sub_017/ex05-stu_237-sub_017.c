
#define FORA 0
#define DENTRO 1
#define NAO 0
#define SIM 1

#include <stdio.h>

int main() {
    int encontrouAspas = NAO;
    int encontrouBackslash = NAO;
    char c;

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            if (encontrouAspas == SIM) {
                putchar(c);
            }
            else {
                putchar('\n');
            }
        }
        else if (c == '"') {
            if (encontrouAspas == NAO) {
                encontrouAspas = SIM;
            }
            else {
                if (encontrouBackslash == SIM) {
                    putchar(c);
                    encontrouBackslash = NAO;
                }
                else {
                    encontrouAspas = NAO;
                }
            }
        }
        else if (c == '\\') {
            if (encontrouBackslash == NAO) {
                encontrouBackslash = SIM;
            }
            else {
                putchar(c);
                encontrouBackslash = NAO;
            }
        }
        else {
            putchar(c);
        }
    }

    return 0;
}