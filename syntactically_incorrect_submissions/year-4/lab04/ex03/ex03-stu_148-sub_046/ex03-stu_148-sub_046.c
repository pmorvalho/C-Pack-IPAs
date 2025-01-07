
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, num, linha, num_max = 0;
    scanf("%d", &n);
    int valores[n];
    if (n <= VECMAX) {
        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            valores[i] = num;
            if (num > num_max)
                num_max = num;
        }
        
        for (linha = 0; linha < num_max; linha++) {
                for (i = 0; i < n; i++) {

                    if ((num_max - valores[i]) > linha)
                        printf(" ");
                    else
                        printf("*");
            }
            printf("\n");
        }  
    }

    return 0;
}