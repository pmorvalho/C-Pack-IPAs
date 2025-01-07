
#include <stdio.h>

int main()
{
    int VECMAX = 0, index = 0;
    int n[VECMAX];

    scanf("%d", &VECMAX);

    while (scanf("%d", &n[index]) && index < VECMAX)
    {
        index++;
    }
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}