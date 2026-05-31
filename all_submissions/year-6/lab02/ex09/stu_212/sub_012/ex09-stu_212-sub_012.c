
#include <stdio.h>
int main () {
    int n;
    int hours, m, s;
    scanf("%d", &n);
    hours = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;
    printf("%02d:%02d:%02d", hours, m, s);
    return 0;
    }