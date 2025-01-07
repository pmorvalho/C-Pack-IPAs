
#include <stdio.h>
#define VECMAX 100

int main(){

    int n = 0, i, j, max = 0;

    while (n <= 0 || n >= 100)
        scanf("%d", &n);
    
    int numero[n];

    for ( i = 0; i < n; i++)
        scanf("%d", &numero[i]);
    
    for (i = 0; i < n; i++){
        if (numero[i] > max)
            max = numero[i];   
    }

    for ( i = 0; i < max; i++){
        for ( j = 0; j < n; j++){
            if (numero[j] > 0){
                printf("*");
                numero[j]--;
            }
            else
                printf(" ");    
        }
        printf("\n");
    }

    return 0;
}