
#include <stdio.h>

void swap(int *num1, int *num2) 
{
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);
    printf("%d %d %d\n", a, b, c);
    return 0;
}