
#include <stdio.h>

void quadrado(int n)
{
    int i = 1, key = n;
    while (i <= n) 
    {
        int j = i;
        for (j ; j <= key; j++) 
        {
            if (j != key)
                printf("%d\t", j);
            else
                printf("%d\n", j);
        }
        i++;
        key++;
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