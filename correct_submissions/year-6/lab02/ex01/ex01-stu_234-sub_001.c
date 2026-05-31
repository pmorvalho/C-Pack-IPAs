
#include <stdio.h>

int main () {
    int a, b, c, maior;
    
    scanf("%d %d %d", &a,&b,&c);
    maior = a;
    if (b > a)
        maior = b;
    if (c > maior)
        maior = c;
    printf("%d\n", maior);
    return 0;
}