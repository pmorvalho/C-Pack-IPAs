
#include <stdio.h>

int main() {
    int n, VECTORMAX = 100;
    scanf("%d", &n);

    if (n < VECTORMAX) {
        int values[n];
        int max_value = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &values[i]);
        }

        
        for (int i = 0; i < n; i++) {
            if (values[i] > max_value) {
                max_value = values[i];
            }
        }

        
        for (int linha = max_value; linha >0; linha--) {
            for (int pos = 0; pos < n; pos++) {
                if (values[pos] >= linha) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
