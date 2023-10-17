
#include <stdio.h>



void piramide(int n)
{
    int i, espacos, num;
    for (i = 1; i <= n; i++)
        {
            for(espacos = 1; espacos <= ((n * 2) - (2 * i)); espacos++)
                printf(" ");
            for (num = 1; num <= i; num++)
                if (num != i)
                    printf("%d ", num);
                else
                    printf("%d", num);
            for (num = i; num > 0; --num)
                if (num != i)
                    printf(" %d", num);      
            printf("\n");
            
        }
}


int main()
{
    int n;
    scanf("%d", &n);
    while (n < 2)
        scanf("%d", &n);
    piramide(n);
    return 0;
}