#include <stdio.h>
int n_original, dig, numero_dig = 0, soma, n;

int main(){
    
    scanf("%d", &n_original);

    n = n_original;
    while (n > 0)
    {
        dig = n % 10;
        soma = soma + dig;
        numero_dig++;
        n = n/10;
    }
    printf("%d\n%d\n",numero_dig, soma);
    return 0;
}
