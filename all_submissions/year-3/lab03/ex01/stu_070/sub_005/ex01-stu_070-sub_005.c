
#include <stdio.h>

void quadrado(int n)
{
    int i, j;
    
    for(j = 1; j <= n; j++){
        printf("%d", j);
        for(i = j + 1; i <= n + j - 1; i++){
            printf("\t%d", i);
        }
    printf("\n");
    }
    
}

int main()
{
    int n;
    
    scanf("%d", &n);
    quadrado(n);
    return 0;
}