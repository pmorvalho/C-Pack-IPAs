
#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int seconds, minutes, hours;
    minutes = N / 60;
    seconds = N % 60;
    hours = minutes / 60;
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
}