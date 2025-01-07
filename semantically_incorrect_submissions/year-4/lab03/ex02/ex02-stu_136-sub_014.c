

#include <stdio.h>

void piramide(int n) {

    int i, j;
    int num;

    for (i=1; i<=n; i++) {
        num = 1;
        for (j=1; j<=n-1; j++) {

            if (j > n-i) {
                printf("%d ",num);
                num++;
            }
            else {
                printf("  ");
            }
        }
        
        printf("%d",num);

        if (i == 1) {
            printf("\n");
            continue;
        }

        num--;
        printf(" ");
        
        for (++j; j<(2*n-1); j++) {

            if ((2*n-j) > n-i) {
                printf("%d ",num);
                num--;
            }
            else {
                printf("  ");
            }
        }

        if (i == n) {
            printf("%d\n",num);
        }
        else {
            printf(" \n");
        }

    }
}

int main() {

    int n;

    scanf("%d",&n);
    piramide(n);

    return 0;
}