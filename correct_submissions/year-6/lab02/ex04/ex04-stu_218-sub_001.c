
#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int main() {
    int a, b, c;
    int menor, maior, meio;

    scanf("%d %d %d", &a, &b, &c);

    menor = min(min(a, b), c);
    maior = max(max(a, b), c);
    meio = a + b + c - menor - maior; 
    
    printf("%d %d %d\n", menor, meio, maior);

    return 0;
}