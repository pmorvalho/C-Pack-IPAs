
#include <stdio.h>


int main() {
    int count = 0, num;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        !(num % i) ? count++ : 0;
    }

    printf("%d\n", count);

    return 0;
}
