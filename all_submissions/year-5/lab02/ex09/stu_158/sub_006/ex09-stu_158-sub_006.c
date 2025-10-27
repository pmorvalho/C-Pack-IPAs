
#include <stdio.h>

int main() {
    int num, hours, minutes, seconds;

    scanf("%d", &num);
    seconds = num % 60;
    minutes = (num / 60) % 60;
    hours = num / 3600;
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}