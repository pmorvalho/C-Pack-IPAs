#include <stdio.h>
int n_original, dig, numero_dig = 0, soma, n;

int main(){
    printf("Escreva um numero\n");
    scanf("%d", &n_original);

    n = n_original;
    while (n > 0)
    {
        dig = n % 10;
        soma = soma + dig;
        numero_dig++;
        n = n/10;
    }
    printf("O numero %d tem %d digitos e a soma destes e %d", 
        n_original, numero_dig, soma);
    return 0;
}