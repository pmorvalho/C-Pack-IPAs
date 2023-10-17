

#include <stdio.h>


void quadrado(int n);


int main() {
    int n, i;
    
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        quadrado(n);
    }
    
    return 0;
}

void quadrado( int n) {
    int i;
    
    for ( i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    
}