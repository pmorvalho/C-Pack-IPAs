#include <stdio.h>

#define PENDENTE 3
#define FEITA 2
#define SOMAR 1
#define SUBTRAIR 0

int main() {
    int c; 
    int numero, conta, resultado, digito;
    int estado;

    numero = 0;
    resultado = 0;

    estado = SOMAR;
    conta = PENDENTE;


    while ((c = getchar()) != EOF) {
        digito = c - 48;
        if (c >= '0' && c <= '9') {
            numero = numero * 10 + digito;
            conta = PENDENTE;
        }
        if (c == ' ' || c == '\n') {
            if (estado == SOMAR && conta == PENDENTE) {
                resultado += numero;
            } else if (estado == SUBTRAIR && conta == PENDENTE) {
                resultado -= numero;
            }
            conta = FEITA;
            numero = 0;
        }
        if (c == '+') 
        {
            estado = SOMAR;
        }
        if (c == '-') 
        {
            estado = SUBTRAIR;
        }
    }
    printf("%d\n", resultado);
    return 0;
}