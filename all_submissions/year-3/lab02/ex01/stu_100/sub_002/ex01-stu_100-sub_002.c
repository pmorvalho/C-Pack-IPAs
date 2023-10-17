

#include <stdio.h>

int main() {
    
    int valor1, valor2, valor3;

    scanf("%d %d %d", &valor1, &valor2, &valor3);
    
    if (valor1 >= valor2) {
        if (valor1 >= valor3)
            printf("%d\n", valor1);
        else
            printf("%d\n", valor3);
    }
    else if (valor2 >= valor3)
        printf("%d\n", valor2);
    else
      printf("%d\n", valor3);
    
    return 0;
}

