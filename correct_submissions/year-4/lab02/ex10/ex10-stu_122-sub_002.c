
#include <stdio.h>

int main()
{
    int n, dig = 0, soma = 0;
    scanf ("%d",&n);
    
    while (n!= 0)
    {
        dig++;
        soma += n % 10;
        n /= 10;
    }
    printf("%d\n",dig);
    printf("%d\n",soma);
    return 0;
}