
#include <stdio.h>

int main(){
    int N, hours, minutes, seconds;

    scanf("%d", &N);

    hours = N / 3600;
    minutes = N % 3600 / 60;
    seconds = N % 3600 % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}