
#include <stdio.h>

int main()
{
    int maior = 0;
    int menor = 0;
    int i = 0;

    scanf("%d", &maior);
    scanf("%d", &menor);

    if(menor > maior){
        printf("%d \n", maior);
        printf("%d", menor);
    } 
    else {
        printf("%d \n", menor);
        printf("%d", maior);
    }

    return 0;
}