

#include <stdio.h>

int main() {
    int c;
    int numero = 0;
    int conta = 0;
    int soma = 0;
    int sub = 0;

    while ((c = getchar()) != '\n'){
        if(c == ' ' && numero > 0){

            if(conta == 0){
                conta = numero;
                numero = 0;
            }
            if(soma){
                conta +=numero;
                numero = 0;
                soma = 0;
            }
            if(sub){
                conta -= numero;
                numero = 0;
                sub = 0;
            }
        }

        else if(c == '+')
            soma = 1;

        else if(c == '-')
            sub = 1;

        else if(c != ' '){
            numero = (10 * numero) + c - '0';
            printf("numero: %d\n", numero);
        }
            
    }
    if(soma){
        conta += numero;
    }
    if(sub){
        conta -= numero;
    }

    printf("%d \n", conta);

    return 0;
}
