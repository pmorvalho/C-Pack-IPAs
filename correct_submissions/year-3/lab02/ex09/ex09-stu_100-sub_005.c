

#include <stdio.h>

int main() {
    
    int time, horas, min, seg;

    scanf("%d", &time);

    horas = time / 3600;
    time %= 3600;
    min = time / 60;
    seg = time % 60;


    printf("%02d:%02d:%02d\n", horas, min, seg);

    return 0;
}