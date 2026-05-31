

#include <stdio.h>

int main(){

    int s;

    scanf("%d", &s);

    int h = (s - (s % 3600)) / 3600;
    s %= 3600;
    int m = (s - (s % 60)) / 60;
    s %= 60;

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}