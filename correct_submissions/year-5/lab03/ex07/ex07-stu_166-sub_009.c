

#include <stdio.h>

int main () {
    char c;
    int n = 0, soma = 0;
    while ((c = getchar()) != ' ' && c != EOF) {
        if (c >= '0' && c <= '9') {
            n = n*10 + (c - '0');
        }
    }
    soma += n;
    while (c != EOF) {
        c = getchar();
        if (c == '+') {
            n = 0;
            c = getchar();
            c = getchar();
            while (c != ' ' && c != EOF) {
                if (c >= '0' && c <= '9') {
                    n = n*10 + (c - '0');
                }
                c = getchar();
            }
            soma += n;
        }
        else if (c == '-') {
            n = 0;
            c = getchar();
            c = getchar();
            while (c != ' ' && c != EOF) {
                if (c >= '0' && c <= '9') {
                    n = n*10 + (c - '0');
                }
                c = getchar();
            }
            soma -= n;
        }
        while (c != ' ' && c != EOF) {
            n = 0;
            if (c >= 0 && c <= 9) {
                n = n*10 + (c - '0');
            }
            c = getchar();
        }
    }
    printf("%d\n",soma);
    return 0;
}