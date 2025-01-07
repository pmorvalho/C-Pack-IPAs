
#include <stdio.h>

void piramide (int num) {
    int linha, col, i;
    for (linha = 1; linha <= num; linha++) {
        i = 0;
        for (col = 1; col <= (num + linha - 1); col++) {
            if (col > (num - linha)){
                if (col <= num)
                    printf("%d", ++i);
                else if (col < (2*num - 1))
                    printf("%d", --i);
                else 
                    printf("%d\n", --i);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main () {
    int num;
    scanf("%d", &num);
    piramide(num);

    return 0;
}