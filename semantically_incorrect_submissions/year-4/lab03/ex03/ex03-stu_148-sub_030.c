
#include <stdio.h>

void cruz(int num) {
    int linha, col;
    for (linha = 1; linha <= num; linha++) {
        for (col = 1; col <= num; col++) {
            if (col == linha || col == (num - linha + 1))
                printf("*");
            else
                printf("-");
        }
        if (linha != num)
            printf("\n");
    }
}

int main () {
    int num;
    scanf("%d", &num);
    cruz(num);

   return 0; 
}

