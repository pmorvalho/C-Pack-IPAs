
#include <stdio.h>

void quadrado(int n)
{
    int i = 1, keep = n;
    while (i <= n) 
    {
        int j = i;
        for (j ; j <= keep; j++) 
        {
            if (j != keep)
                printf("%d\t", j);
            else
                printf("%d\n", j);
        }
        i++;
        keep++;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 1)
        return -1;
    quadrado(n);
    return 0;
}