

#include <stdio.h>

void piramide(int n) {

    int i, j;
    int num;

    for (i=1; i<=n; i++) {
        num = 1;
        for (j=1; j<n+i-1; j++) {

            if (j > n-i && j < n+i-1) {
                printf("%d ",num);
                num++;
            }
            else {
                printf("  ");
            }
        }
        
        printf("%d\n",num);
    }
}

int main() {

    int n;

    scanf("%d",&n);
    piramide(n);

    return 0;
}