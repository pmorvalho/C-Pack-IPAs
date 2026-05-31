
#include <stdio.h>

int main()
{
    int s, min, h, resto;
    scanf("%d", &s);
    h = s / 3600;
    resto = s % 3600;
    min = resto / 60;
    resto = resto % 60;
    if (h < 10)
        printf("0%d:", h);
    else 
        printf("%d:", h);
    if (min < 10)
        printf("0%d:", min);
    else 
        printf("%d:", min);
    if (resto < 10)
        printf("0%d\n", resto);
    else 
        printf("%d\n", resto);
    return 0;
}