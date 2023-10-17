
#include <stdio.h>

int main() {
    int N, horas, minutos;
    scanf("%d", &N);
    horas = N / 3600;
    N %= 3600;
    minutos = N / 60;
    N %= 60;
    if (horas < 10) {
        if (minutos < 10) {
            if (N < 10) printf("0%d:0%d:0%d\n", horas, minutos, N);
            else printf("0%d:0%d:%d\n", horas, minutos, N);
        }
        else {
            if (N < 10) printf("0%d:%d:0%d\n", horas, minutos, N);
            else printf("0%d:%d:%d\n", horas, minutos, N);
        }
    }
    else {
        if (minutos < 10) {
            if (N < 10) printf("%d:0%d:0%d\n", horas, minutos, N);
            else printf("%d:0%d:%d\n", horas, minutos, N);
        }
        else {
            if (N < 10) printf("%d:%d:0%d\n", horas, minutos, N);
            else printf("%d:%d:%d\n", horas, minutos, N);
        }
    }
    return 0;
}
