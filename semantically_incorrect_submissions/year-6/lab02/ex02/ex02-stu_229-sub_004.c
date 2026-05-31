
#include <stdio.h>

int main()
{
    int n, i, maior = 0, menor;
    for(i = 0; i < 2; i++){
        scanf("%d", &n);
        if (n > maior) maior = n;
        if (n < menor) menor = n;
    }
    printf("%d\n%d\n", menor, maior);
    return 0;
}