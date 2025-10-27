

#include <stdio.h>

void cruz(int n) {
    int i, a;

    for(i=1; i <= n; i++) {
        for(a = 1; a <= n ;a++){
            if (a == i) {
                if (a == 1)
                    printf("* ");
                else
                    printf("* ");
            }
            else if (a == n - i +1) {
                if (a == n)
                    printf("*");
                else
                    printf("* ");
            }
            else {
                if (a == 1)
                    printf("- ");
                else if (a == n)
                    printf("-");
                else 
                    printf("- ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    scanf("%d", &n);
    cruz(n);
    return 0;
}