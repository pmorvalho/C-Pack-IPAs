
#include <stdio.h>
#define DIM 100
#define POINT 1
#define SPACE 0

int main(){

    int n, grt = 0;
    int i, j, k, l, m, p;
    int numbers[DIM + 1][DIM];

    scanf("%d", &n);

    for(i = 0; i < n; ++i){
        scanf("%d", &numbers[0][i]);
        if(numbers[0][i] > grt)
            grt = numbers[0][i];
    }

    for(j = 0; j < n; j++){
        for(k = 0; k < numbers[0][j]; k++)
            numbers[k + 1][j] = POINT;
        for(l = k; l < grt; l++)
            numbers[l + 1][j] = SPACE;   
    }

    for(m = 1; m < grt + 1; m++){
        for(p = 0; p < n; p++){
            if(numbers[m][p] == POINT)
                putchar('*');
            else
                putchar(' ');
        }

        printf("\n");
    }

    return 0;
}