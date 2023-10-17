
#include <stdio.h>

int main() {
    int N, horas, minutos;
    scanf("%d", &N);
    horas = N / 3600;
    N %= 3600;
    minutos = N / 60;
    N %= 60;
    printf("%02d:%02d:%02d", horas, minutos, N);
    return 0;
}
