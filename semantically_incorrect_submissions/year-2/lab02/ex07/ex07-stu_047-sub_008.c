#include <stdio.h>

int main()
{
    int n, div = 0, i = 1;
    printf("Introduza um inteiro positivo.\n");
    scanf("%d", &n);
    while(i <= n){
        if(n % i == 0)
            ++div;
        ++i;
    }
    printf("%d", div);
    return 0;
}