

#include <stdio.h>

void piramide(int N) {
    int i, j = 1, aux;
    while (j <= N) {
        i = 1;
        aux = N - j;
        while (aux > 0) {
            printf("  ");
            --aux;
        }
        while (i < j) {
            printf("%d ", i);
            ++i;
        }
        while (i > 0) {
            if (i == 1)
                printf("%d", i);
            else
                printf("%d ", i);
            --i;
        }
        printf("\n");
        ++j;
    }        
}

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}