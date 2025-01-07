

#include <stdio.h>

void cruz(int n) {

    int i, j;

    for (i=0; i<n; i++) {
        
        for (j=0; j<n-1; j++) {

            if (i == j || i+j == n-1) {
                printf("* ");
            }
            else {
                printf("- ");
            }
        }

        if (i == 1 || i == n-1) {
            printf("*\n");
        }
        else
            printf("-\n");

    }
}

int main() {

    int n;

    scanf("%d",&n);
    cruz(n);

    return 0;
}
