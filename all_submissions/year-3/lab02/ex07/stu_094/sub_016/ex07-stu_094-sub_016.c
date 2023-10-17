

#include <stdio.h>

int main () {

    int v;
    int counter, num_div = 0;

    scanf("%d", &v);

    for (counter = 1; counter <= v; counter++) {
        if (v % counter == 0) {
            num_div++;
        }
    }
    printf("%d", num_div);
    return 0;
}