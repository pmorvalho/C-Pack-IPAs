
#include <stdio.h>

int main() {

    int sum, aux = 0;
    char c = 0;

    while (c != '\n') {
        scanf("%c", &c);
        if (c >= '0' && c <= '9') {
            aux += c - '0';
            continue;
        }

        if (c == '-') {
            sum -= aux;
            continue;
        }

        if (c == '+') {
            sum += aux;
            continue;
        }
    }

    return 0;
}