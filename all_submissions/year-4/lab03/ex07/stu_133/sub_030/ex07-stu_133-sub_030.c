
#include <stdio.h>

#define DIM 500
#define SOMA 1
#define SUBTRAI -1

int main() {
    char caracteres[DIM];
    int resultado = 0, i = 0, proximoNumero = 0, sinal = SOMA;

    fgets(caracteres, DIM, stdin);
    
    for (i = 0; caracteres[i] != '\0'; i++) {
        if (caracteres[i] >= '0' && caracteres[i] <= '9') {
            proximoNumero = 0;
            while (caracteres[i] >= '0' && caracteres[i] <= '9') {
                proximoNumero = (proximoNumero * 10) + (caracteres[i] - '0');
                i++;
            }
            resultado += sinal * proximoNumero;
        } else if (caracteres[i] == '+') {
            sinal = SOMA;
        } else if (caracteres[i] == '-') {
            sinal = SUBTRAI;
        }
    }
    printf("%d\n", resultado);
    return 0;
}
