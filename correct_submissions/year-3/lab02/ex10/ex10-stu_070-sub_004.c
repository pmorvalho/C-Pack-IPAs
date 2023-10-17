
#include <stdio.h>

int main ()
{
    int n, num, soma;
    
    scanf("%d", &n);
    
    while (n > 0) {
        soma += n % 10;
        num++;
        n /= 10;
    }
    
    printf("%d\n%d\n", num, soma);
    return 0;
}