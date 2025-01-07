
#include <stdio.h>

#define vecmax 100

int main() {
    int n, cont = 0, cont2 = 0, n2, vec[vecmax];

    scanf("%d", &n);

    while (cont < n) {
        scanf("%d", &n2);
        vec[cont] = n2;
        cont++;
    }

    cont = 0;

    while (n2--) {
        while (cont < n) {
            if (vec[cont] > cont2) {
                putchar('*');
            }
            else {
                putchar(' ');
            }
            cont++;
        }
        putchar('\n');
        cont2++;
        cont = 0;
    }
    
    
}