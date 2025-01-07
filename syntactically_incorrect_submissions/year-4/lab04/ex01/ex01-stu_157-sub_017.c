
#include <stdio.h>

#define VECMAX 100

void estrelas(int n) {
    int i;
    for (i = 0; i < n; i++) 
        printf("*");
    
    printf("\n");
}

int main(void) {
    int n;
    scanf("%d", &n);
    for (int counter = 0; counter < n; counter++) {
        int temporario;
        scanf("%d", &temporario);
        estrelas(temporario);
    }
    return 0;
}