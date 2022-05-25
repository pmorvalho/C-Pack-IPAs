#include <stdio.h>

void espacos(int nr)
{
    int i;
    for (i=0; i< nr; i++) {
        printf(" ");
    }
}

void piramide(int n)
{
    int n_linha, i, nr_espacos;

    nr_espacos = 2 * (n - 1); 
    for (n_linha = 1; n_linha <= n; ++n_linha) {
        
        espacos(nr_espacos);
        for (i = 1; i < n_linha ; i++) {
            printf("%d ", i);
        }
        printf("%d", n_linha);
        for (i = n_linha - 1; i >=1 ; i--) {
            printf(" %d", i);
        }
        printf("\n");
        nr_espacos -= 2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2)
        return -1;
    piramide(n);
    return 0;
}