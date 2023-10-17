
#include <stdio.h>

int main()
{
    
    int maior, numero1, numero2, numero3;

    scanf("%d%d%d", &numero1, &numero2, &numero3);
    
    if (numero1 >= numero2 && numero1 >= numero3) {
        maior = numero1;
    } else if (numero2 >= numero1 && numero2 >= numero3) {
        maior = numero2;
    } else {
        maior = numero3;
    }

    printf("%d\n", maior);
    return 0;
}
