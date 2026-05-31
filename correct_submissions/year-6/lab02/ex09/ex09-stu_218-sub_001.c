
#include <stdio.h>

int main() {
    int secs, hours, minutes;


    scanf("%d", &secs);

    hours = secs / 3600;
    secs = secs % 3600;

    minutes = secs / 60;
    secs = secs % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, secs);

    return 0;
}