
#include <stdio.h>
#define SEG 60
#define HOURS 360

int main(){
    int N, hours = 0;
    scanf("%d", &N);
    hours = N / HOURS;
    printf("%.2d:%.2d:%.2d\n", hours, (N - (hours * HOURS)) / 60, N % SEG);
    return 0;
}