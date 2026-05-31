
#include <stdio.h>

int main()
{
    int s, min, h, resto;
    scanf("%d", &s);
    h = s / 3600;
    resto = s % 3600;
    min = resto / 60;
    resto = resto % 60;
        printf("%02d:", h);
        printf("%02d:", min);
        printf("%02d\n", resto);
    return 0;
}