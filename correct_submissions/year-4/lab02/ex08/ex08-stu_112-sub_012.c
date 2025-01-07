
#include <stdio.h>

int main() {
    int n, numero;
    float num;
    float media = 0;  
    
    scanf("%d", &n);


    numero = n;

    while (n > 0) {  
        scanf("%f", &num);
        media += num;
        --n;
    }

    printf("%.2f\n", media / numero);  
    return 0;
}
