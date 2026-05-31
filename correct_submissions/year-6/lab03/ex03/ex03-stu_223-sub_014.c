
#include <stdio.h>
void cruz(int n);
int ast(int n, int i, int k);

int main() {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}

int ast(int n, int i, int k) {
    return k == n+1-i || k==i;
}

void cruz(int n) {
    int i,k;
    for(i=1; i<=n; i++) {
        for(k=1; k<=n ; k++) {
            if(k == n) {
                if(ast(n,i,k))
                    putchar('*');
                else
                    putchar('-');
            } else {
                if(ast(n,i,k))
                    printf("* ");
                else
                    printf("- ");
            }
        }
        printf("\n");
    }
}

