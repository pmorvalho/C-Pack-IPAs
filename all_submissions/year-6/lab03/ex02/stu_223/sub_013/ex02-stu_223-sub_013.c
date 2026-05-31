
#include <stdio.h>
void piramide(int n) {
    int i,j,k,l;
    for(i=1; i<=n; i++) {
        for(k=1; k<= 2*(n-i); k++) {
            printf(" ");
        }
        for(j=1; j<=i; j++) {
            printf("%d", j);
            if(j<i)
                printf(" ");
        }
        for(l=i-1; l>=1; l--) {
            printf(" %d", l);
        }
        printf("\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    if (n>=2)
        piramide(n);
    return 0;
}