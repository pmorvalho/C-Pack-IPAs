
#include <stdio.h>

void quadrado(int n)
{
    int i = 1, keep = n;
    while (i <= n) 
    {
        for (int j = i; j <= keep; j++) 
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
    if (n < 2)
        return -1;
    quadrado(n);
    return 0;
}