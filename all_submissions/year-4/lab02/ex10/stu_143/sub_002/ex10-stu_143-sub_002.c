

#include <stdio.h>

int main(){
    int contador, soma = 0, num;
    scanf("%d", &num);
    while (num > 0)
    {
        contador +=1;
        soma += num % 10;
        num /= 10;
    }

    printf("%d\n", contador);
    printf("%d\n", soma);
    
    return 0;
}