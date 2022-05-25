#include <stdio.h>



int main()
{
    int num, max, i;
    printf("Introduza 3 numeros inteiros:\n");
    scanf("%d", &max);
    for(i = 0; i < 2; i = i + 1)
    {
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("O maior numero e:\n");
    printf( "%d\n", max);
    return 0;
}
