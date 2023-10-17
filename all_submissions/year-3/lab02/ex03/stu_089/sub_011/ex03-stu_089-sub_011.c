


#include <stdio.h>

int main()
{
    int numero = 0;
    int divisor = 0;

    scanf("%d %d", &numero, &divisor);

    if( (numero % divisor) == 0){
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}