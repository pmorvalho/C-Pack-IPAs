

#include <stdio.h>

int main () {

    int v;
    int counter, n_div = 0;

    scanf("%d", &v);

    for (counter = 1; counter <= v; counter++) {
        if (v % counter == 0) {
            n_div++;
        }
    }
    printf("%d\n", n_div);
    return 0;
}