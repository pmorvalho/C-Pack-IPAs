
#include <stdio.h>

int main ()
{
    int a, b, menor, maior;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (b > a){
        menor = a;
        maior = b;
    }
    else {
        menor = b;
        maior = a;
    }
    
    printf("%d\n%d\n", menor, maior);
    return 0;
}
