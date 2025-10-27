
#include <stdio.h>

int main() 
{
    
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = a > b ? a :         b;
    
    maior = c > maior ? c : maior;
    printf("%d\n", maior);
    return 0;
}