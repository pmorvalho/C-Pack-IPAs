
#include <stdio.h>
int main() {
    int N, numDigitos = 0, somaDigitos = 0, digito;
    scanf("%d", &N);
    
    int temp = N;
    while (temp != 0) {
        digito = temp % 10;
        numDigitos++;
        somaDigitos += digito;
        temp /= 10;
    }
    printf("%d\n", numDigitos);
    printf("%d\n", somaDigitos);
    return 0;
}
