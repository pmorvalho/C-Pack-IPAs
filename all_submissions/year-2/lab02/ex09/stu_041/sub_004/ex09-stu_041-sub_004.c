#include <stdio.h>










int main()
{
    int n, horas, mins, segs;
    scanf("%d", &n);
    horas = n / 3600;
    n = n % 3600;
    mins = n / 60;
    n = n % 60;
    segs = n;
    printf("%02d:%02d:%02d\n", horas, mins, segs);
    return 0;
}