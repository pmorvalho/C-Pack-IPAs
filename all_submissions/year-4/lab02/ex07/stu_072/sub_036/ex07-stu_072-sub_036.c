

#include <stdio.h>

int main() {
    int n, divs = 0;

    scanf("%d", &n);


    for (int i = 1; i < (n/2) + 1; i++) {
        if ((n % i) == 0) {
            divs += 1;
        }
    }

    printf("%d\n", divs + 1);

    return 0;
}