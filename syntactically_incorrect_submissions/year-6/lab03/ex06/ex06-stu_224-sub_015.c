
#include <stdio.h>
#define N_DIGITOS 100

int divisivelPorNove(char numero[]) {
    if (numero[0] == '\0') 
        return 0;
    
    return somaDigitos(numero) % 9 == 0; 
}

int somaDigitos(char numero[]) {
    int i, soma = 0;
    for (i = 0; numero[i]; i++)
        soma += numero[i] - '0'; 
    return soma;
}

int main() {
    char str[N_DIGITOS+1]; 
    scanf("%s", str); 
    printf("%s\n", divisivelPorNove(str)?"yes":"no");
    return 0;
}