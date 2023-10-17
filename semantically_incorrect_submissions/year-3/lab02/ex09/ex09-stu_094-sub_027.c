

#include <stdio.h>

int main () {

    int v;
    int horas, min, seg, resto;

    scanf("%d", &v);

    horas = v / 3600;
    resto = v % 3600;
    min = resto / 60;
    seg = resto % 60;
    
    printf("%2d:%2d:%2d\n", horas, min, seg);
    return 0;
}