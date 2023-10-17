

#include <stdio.h>

void piramide(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j > 1)
                putchar(' ');
            if (i + j - n > 0) 
                printf("%d", i + j - n);
            else
                putchar(' ');
        }
        for (--j; j >= 0; --j) {  
            if (i + j - n - 1 > 0) 
                printf(" %d", i + j - n - 1);
        }
        putchar('\n');
    }
}

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}