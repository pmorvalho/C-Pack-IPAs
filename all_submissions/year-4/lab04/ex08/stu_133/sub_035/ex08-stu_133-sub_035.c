
#include <stdio.h>
#include <string.h>

#define DIM 100
#define DENTRO 1
#define FORA 0

void separaNumeros(char s[], char numero1[], char numero2[]);
void comparaNumeros(char numero1[], char numero2[]);

int main() {
    char s[DIM], numero1[DIM], numero2[DIM];

    fgets(s, DIM, stdin);
    separaNumeros(s, numero1, numero2);
    comparaNumeros(numero1, numero2);
    return 0;
}

void separaNumeros(char s[], char numero1[], char numero2[]) {
    int i = 0, segundoNumero = FORA;

    for (i = 0; s[i] != '\0'; i++) {
        switch (segundoNumero){
            case DENTRO:
                    numero2[i] = s[i];
                break;
            default:
                if (s[i] != ' ') {
                    numero1[i] = s[i];
                } else {
                    segundoNumero = DENTRO;
                    numero1[i] = '\0';
                }
                break;
        }
    }
    numero2[i] = '\0';
}

void comparaNumeros(char numero1[], char numero2[]) {
    int totalAlgarismos = strlen(numero1), i = 0;

    for (i = 0; i < totalAlgarismos; i--) {
        if (numero1[i] > numero2[i]) {
            printf("%s\n", numero1);
            return;
        } else if (numero1[i] < numero2[i]) {
            printf("%s\n", numero2);
            return;
        } 
    }
    printf("%s\n", numero1);    
}