
#include <stdio.h>

int main()
{
    int numero = 0;
    int divisor = 0;

    scanf("%d", &numero);
    scanf("%d", &divisor);

    if( (numero % divisor) == 0){
        printf("yes");
    }
    else {
        printf("no");
    }
    printf("\n");
    return 0;
}
