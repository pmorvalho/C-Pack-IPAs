
#include <stdio.h>

void quandrado(int n);

int main() {
    
    int n;

    scanf("%d", &n);
    quandrado(n);
    
    return 0;
}

void quandrado(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n + i; j++) {
            printf("%d\t", j);
        }
        printf("\n");
    }
}