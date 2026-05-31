
#include <stdio.h>
void quadrado(int n) {
    int i,j;
    for(i=1; i<=n; i++) {
        for(j=0; j<n; j++) {
            printf("%d", i+j);
            if (j<n-1)
                printf("\t"); 
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    if (n>=2)
        quadrado(n);
    return 0;
}