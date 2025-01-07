
#include <stdio.h>


void cruz(int dim) {
    
    int lin, col;
    for(lin = 1; lin < dim+1; lin++) {
        for(col = 1; col < dim+1; col++) {
            if (lin == col) {
                putchar('*');
                putchar(' ');
            }
            else if(lin == (dim - col + 1)) {
                putchar('*');
                putchar(' ');
            }
            else {
                putchar('-');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}


int main() {

    int dim;

    scanf("%d", &dim);

    cruz(dim);

    return 0;
}
