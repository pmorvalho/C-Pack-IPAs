
#include <stdio.h>

int main() {
    int num1, num2, resultado;
    char op;

    
    scanf("%d %c %d", &num1, &op, &num2);

    
    if (op == '+')
        resultado = num1 + num2;
    else
        resultado = num1 - num2;

    
    while (scanf(" %c %d", &op, &num1) == 2) {
        
        if (op == '+')
            resultado += num1;
        else
            resultado -= num1;
    }

    
    printf("%d\n", resultado);

    return 0;
}
