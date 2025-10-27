

#include <stdio.h>

void cruz (int n) {
    int count = 0, linha = 1, p_estrela = 1, u_estrela = n, guardar_n = n ;
    while (count < guardar_n) {
        linha = 1;
        while (linha < n + 1){
            if ((linha == u_estrela && linha == n)) {
                printf("*\n");
            }            
            else if (linha == p_estrela || linha == u_estrela) {
                printf("* ");
            }
            else if (linha == n)
                printf("-\n");
            else
                printf("- ");
            linha++;
        }
        p_estrela++;
        u_estrela--;
        count++;
    }
    printf("\n");
}

int main () {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}