

#include <stdio.h>

#define VECMAX 100

int main() {
    int n = 0;
    int valores[VECMAX];
    int valormax = 0; 

    scanf("%d", &n);

    
    if (n <= 0 || n > VECMAX) {
        printf("Número inválido!\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
        if (valores[i] > valormax){
            valormax = valores[i];
        }
    }

    for (int i = 0; i < valormax; i++){
        
        
        for (int j = 0; j < n; j++){
            if (valores[j] >= i+1) putchar('*');
            else putchar(' ');
        }
        printf("\n");
    }

    return 0;
}
