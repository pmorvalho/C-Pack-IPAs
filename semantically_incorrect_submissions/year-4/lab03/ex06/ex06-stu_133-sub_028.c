
#include <stdio.h>

#define DIM 100

int main() {
    int somaDosAlgarismos = 0, i = 0;
    char algarismos[DIM];

    algarismos[0] = getchar();
    while (algarismos[i] >= '0' && algarismos[i] <= '9') {
        somaDosAlgarismos += algarismos[i] - '0';
        i++;
        algarismos[i] = getchar();
    }

    if (somaDosAlgarismos % 9 == 0) {
        printf("yes");
    } else {
        printf("no");
    } 
    return 0;
}