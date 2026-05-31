

#include <stdio.h>

int main ()
{
    int num, i, j;

    scanf("%d", &num);
    for(i = 1; i <= num;i++)
    {
        for(j = 0; j < num;j++)
            if (j == num - 1)
                printf("%d\n", i+j);
            else
                printf("%d\t", i+j);
    }
    return 0;
}