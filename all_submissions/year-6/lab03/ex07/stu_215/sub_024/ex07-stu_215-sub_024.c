

#include<stdio.h>
int main(){
    int c;
    
    int numero_atual = 0;
    int resultado = 0;
    int operador = 1; 
    while ((c = getchar()) != EOF && c != '\n'){
        if (c != ' ' && c != '+' && c!='-'){    
            
            numero_atual = numero_atual*10 + (c - '0'); 
        }
        if (c == ' '){
        }
        if (c == '+' || c == '-'){
            operador = (c =='+')? 1 : -1;
        }
        resultado += operador*numero_atual;
        numero_atual = 0;
    }
    resultado += operador* numero_atual;
    printf("%d\n", resultado);
    return 0;
    }
