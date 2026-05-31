
#include <stdio.h>
int main () {
    int num;
    int hours, m, s;
    scanf("%d", &num);
    hours = num / 3600;
    m = (num % 3600) / 60;
    s = num % 60;
    printf("%02d:%02d:%02d:", hours, m, s);
    return 0;
    }