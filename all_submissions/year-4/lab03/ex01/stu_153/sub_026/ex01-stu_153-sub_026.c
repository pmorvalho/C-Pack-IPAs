
#include <stdio.h>

void quandrado(int n);

int main() {
    
    int n;

    scanf("%d", &n);

    quandrado(n);
    
    return 0;
}


void quandrado(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = i; j < i + n; j++) {
            
            if(j == i + n - 1) {
                printf("%d\n", j);
            }
            else {
                printf("%d\t", j);
            }
        }
    }
    printf("\n");
}