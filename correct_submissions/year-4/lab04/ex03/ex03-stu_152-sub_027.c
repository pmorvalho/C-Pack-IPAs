
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, i, j, v_columns[VECMAX], n_lin = 0;
    char matriz[VECMAX][VECMAX];

    scanf("%d",&n);

    for (i = 0; i < n && n < VECMAX; i++){
        scanf("%d", &v_columns[i]);
        if (v_columns[i] > n_lin)
            n_lin = v_columns[i];
    }

    for (i = 0; i < n_lin && n_lin < VECMAX; i++){
        for (j = 0; j < n && n < VECMAX; j++){
            if (v_columns[j] > 0)
                matriz[i][j] = '*';

            else
                matriz[i][j] = ' ';
            v_columns[j]--;
        }
    } 
    if (n_lin >= VECMAX)
        n_lin = VECMAX - 1;

    for (i = n_lin - 1; i > -1; i--){
        for (j = 0; j < n && n < VECMAX; j++){
            putchar(matriz[i][j]);
        }
        putchar('\n');
    }

    return 0;
}