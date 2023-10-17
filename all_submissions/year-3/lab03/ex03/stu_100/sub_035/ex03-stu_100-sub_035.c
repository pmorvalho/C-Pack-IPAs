

#include <stdio.h>

void cruz(int n);

int main() {
    int n;

    scanf("%d", &n);

    cruz(n);
    return 0;
}

void cruz(int n){
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (n == j)
            {
                if (i == j || i == n - j + 1) {
                    printf("*\n");
            } else
                    printf("-\n");
                
            } else if (i == j || i == n - j + 1) {
                    printf("* ");
            } else
                    printf("- ");
            
        }     
    }
}