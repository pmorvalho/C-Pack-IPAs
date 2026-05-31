

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
            resultado += operador*numero_atual;
            operador = ((c =='+')? 1 : -1);
            numero_atual = 0;
        }
    }
    resultado += operador* numero_atual;
    printf("%d\n", resultado);
    return 0;
    }
