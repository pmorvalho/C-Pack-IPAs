

#include <stdio.h>

int main(){

    int sec, min, hour;

    scanf("%d", &sec);

    hour = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;

    printf("%02d:%02d:%02d\n", hour, min, sec);

    return 0;
}