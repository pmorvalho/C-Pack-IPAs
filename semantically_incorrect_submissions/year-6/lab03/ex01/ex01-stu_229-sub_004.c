
#include <stdio.h>

void quadrado(int n)
{
    int i, j;
    for (i = 1; i <= n; i++){
        for (j = 0; j < n; j++){
            if (j) putchar('\t');
            printf("%d\t", i + j);
        }
        putchar('\n');
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("Número inválido!\n");
        return 1;
    }
    quadrado(n);
    return 0;
}
