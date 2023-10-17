

#include <stdio.h>

int main() {

    int num, secs, mins, hrs;

    scanf("%d", &num);

    hrs = num / 3600;
    mins = num % 3600 / 60;
    secs = num % 3600 % 60;

    printf("%02d:%02d:%02d\n", hrs, mins, secs);

    return 0;
}