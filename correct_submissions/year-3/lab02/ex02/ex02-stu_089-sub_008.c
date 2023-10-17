


#include <stdio.h>

int main()
{
    int maior = 0;
    int menor = 0;

    scanf("%d %d", &maior, &menor);

    if(menor > maior){
        printf("%d\n", maior);
        printf("%d\n", menor);
    } 
    else {
        printf("%d\n", menor);
        printf("%d\n", maior);
    }

    return 0;
}