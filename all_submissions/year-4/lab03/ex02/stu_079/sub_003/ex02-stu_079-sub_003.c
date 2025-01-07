

#include <stdio.h>

void piramide(int n) {
    
    int lin, i;
    char c;

    for(lin = 1; lin < n+1; lin++) {
        for(i = 0; i < n-lin; i++) {
            putchar(' ');
            putchar(' ');
        }
        for(i = 0; i < lin-1; i++) {
            printf("%d ", i+1);
        }
        c = '0' + lin;
        putchar(c);
        for(i = lin-1; i > 0; i--) {
            printf(" %d", i);
        }
        putchar('\n');
    }

    return;
}

int main() {

    int dim;

    scanf("%d", &dim);

    piramide(dim);

    return 0;
}
