
#include <stdio.h>

int main() {
    int n;
    int sec = 0, min = 0, hour = 0;
    scanf("%d", &n);
    hour = n / 3600;
    n %= 3600;
    min = n / 60;
    n %= 60;
    sec = n % 60;

    printf("%02d:%02d:%02d\n", hour, min, sec);
    return 0;
}