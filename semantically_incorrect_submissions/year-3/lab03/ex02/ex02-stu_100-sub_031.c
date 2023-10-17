

#include <stdio.h>


void piramide(int n);

int main () {
    int n;

    scanf("%d", &n);

    piramide(n);

    return 0;
}

void piramide(int n) {
    int i, j, k= 1;

    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= 2*(n - i); j++)
        {
            printf(" ");
        }
        
        for (k = 1; k < i + 1; k++)
        {
            printf("%d ", k);
        }
        
        for ( k = i - 1; k >= 1  ; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
}