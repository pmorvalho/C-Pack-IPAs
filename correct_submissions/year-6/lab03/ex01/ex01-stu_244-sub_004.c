
#include <stdio.h>

void quadrado(int n) {
    int i, j;
    for(i=0; i<n; i++){
        for(j=i+1; j<=n+i; j++){
            if (j < n+i)
                printf("%d\t", j);
            else
                printf("%d\n", j);
            }
        }
    }

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}