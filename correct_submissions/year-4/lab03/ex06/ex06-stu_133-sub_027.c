
#include <stdio.h>

int main() {
    int somaDosAlgarismos = 0, i = 0;
    char algarismo;

    algarismo = getchar();
    while (algarismo >= '0' && algarismo <= '9') {
        somaDosAlgarismos += algarismo - '0';
        i++;
        algarismo = getchar();
    }

    if (somaDosAlgarismos % 9 == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    } 
    return 0;
}