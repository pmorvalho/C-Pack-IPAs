

#include <stdio.h>

int main() {
    int numero1, numero2;
    scanf("%d\n%d", &numero1, &numero2);
    
    if (numero1 > numero2) 
        printf("%d\n%d\n", numero2, numero1);
    else
        printf("%d\n%d\n", numero1, numero2);
    
    return 0;    
}