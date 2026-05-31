

#include <stdio.h>

void quadrado(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
        {for (j = i; j < num + i; j++)
        {
            printf("%d", j);
            if (j != num+i-1)
                printf("\t"); 
        }   
        printf("\n");
    }
}

int main()
{
    int num;

    scanf("%d", &num);
    quadrado(num);
    return 0;
}