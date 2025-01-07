
#include <stdio.h>

int N, seg, min, horas;

int main () {
    scanf("%d", &N);

    horas = N / (60*60);
    N = N - (horas * 60*60);
    min = N / 60;
    seg = N - (min * 60);
    
    if (horas < 10) {
        if (min < 10) {
            if (seg < 10)
                printf("0%d:0%d:0%d\n", horas, min, seg);
            else
                printf("0%d:0%d:%d\n", horas, min, seg);
        }
        else {
            if (seg < 10)
                printf("0%d:%d:0%d\n", horas, min, seg);
            else
                printf("0%d:%d:%d\n", horas, min, seg);
        }
    }
    else {
        if (min < 10) {
            if (seg < 10)
                printf("%d:0%d:0%d\n", horas, min, seg);
            else
                printf("%d:0%d:%d\n", horas, min, seg);
        }
        else {
            if (seg < 10)
                printf("%d:%d:0%d\n", horas, min, seg);
            else
                printf("%d:%d:%d\n", horas, min, seg);
        }                    
    }

    return 0;
}