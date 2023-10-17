

#include <stdio.h>

int main() {
    int n, horas, min, seg;
    scanf("%d", &n);
    horas = n / 3600;
    min = (n % 3600) / 60;
    seg = (n % 3600) % 60;
    printf("%02d:%02d:%02d", horas, min, seg);
    return 0;
}