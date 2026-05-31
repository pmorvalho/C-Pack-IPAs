
#include <stdio.h>

int main() {
    int N;
    int segundos;
    int minutos;
    int horas;
    int temp;

    scanf("%d", &N);

    horas = N / 3600;
    temp = N % 3600;
    minutos = temp / 60;
    segundos = temp % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}