
#include <stdio.h>

int main ()
{
    int maior, a, b, c;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (b > a) {
        maior = b;
    }
    else {
        maior = a;
    }
    
    if (c > maior) {
        maior = c;
    }
    
    printf("%d\n", maior);
    return 0;
}