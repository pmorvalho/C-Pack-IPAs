

#include <stdio.h>

void piramide(int n) {
    int i, j, s;
    for (i = 0; i < n; i++) {
        for (s = 2*i; s < 2*(n-1); s++){
            putchar(' ');
        }
        for (j = (n+1); j > (n-i); j--) {
            printf("%d", (n+2-j));
            if ((j > (n-i+1)) | (i != 0)) 
                putchar(' ');
        }
        for (j = (n-i+1); j < (n+1); j++) {
            printf("%d", (n+1-j));
            if (j < (n))
                putchar(' ');
        }
        for (s = 2*i; s < 2*(n-1); s++){
            putchar(' ');
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
