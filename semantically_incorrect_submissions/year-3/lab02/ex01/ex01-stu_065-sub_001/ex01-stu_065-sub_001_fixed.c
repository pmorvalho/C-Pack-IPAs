

#include <stdio.h>

int main() {
    int num1, num2, num3, maior;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    
    maior = num1;
    
    while (num2 > maior) {
        maior = num2;
    }
    
    while (num3 > maior) {
        maior = num3;
    }
    
    printf("%d\n", maior);
    
    return 0; 
}

 
