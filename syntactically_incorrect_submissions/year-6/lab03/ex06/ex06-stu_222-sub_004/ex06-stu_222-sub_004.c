
#include <stdio.h>
#define N_MAX_DIGITS 100

int main(){
    char str[N_MAX_DIGITS + 1];
    
    scanf("%s", str);
    
    printf("%s\n", divisivelPorNove(str) ? "yes" : "no");
    
    return 0;
}


int divisivelPorNove(char numero[]){
        
        if (numero[0] == '\0')
        
            return 0;
        
        return somaDigitos(numero) % 9 == 0;
}

int somaDigitos(char numero[]){
    
    int soma = 0;

    int i;

    for (i = 0; numero[i]; i++)
        soma += numero[i] - '0';

    return soma;

}
