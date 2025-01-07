

#include <stdio.h>

void quadrado(int n) {

    int i, j;

    for (i=1; i<=n; i++) {
        for (j=i; j<(n+i-1); j++) {
            printf("%d\t",j);
        }
        printf("%d\n",j);
    }
}

int main() {
    
    int n;

    scanf("%d",&n);
    quadrado(n);
    
    return 0;
}
