

#include <stdio.h>

int main() {

    int num, cont, total = 1;

    scanf("%d", &num);

    for (cont = 1; cont < num; cont++) {
        if (num % cont == 0)
            total++;
    }

    printf("%d\n", total);
    
    return 0;
}