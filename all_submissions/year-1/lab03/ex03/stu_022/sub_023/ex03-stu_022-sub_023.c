#include <stdio.h>

void cruz(int n) {

    int i, pos;

    for (i = 1; i <= n; i++) {
        for (pos = 1; pos <= n; pos++){
            if (i == pos || i == n-pos+1)
                printf("* ");
            else
                printf("- ");    
        }
        printf("\n");
    }
}


int main()
{
    int n;

    scanf("%d", &n);
    cruz(n);

    return 0;
}