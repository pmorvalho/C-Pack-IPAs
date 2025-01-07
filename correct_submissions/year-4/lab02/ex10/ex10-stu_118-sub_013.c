
#include <stdio.h>

int main() {
    int n, cont = 0, sum = 0;
    scanf ("%d", &n);
    while (n > 0) {
        sum += n%10;
        n /= 10;
        cont++;
    }
    printf("%d\n%d\n", cont, sum);
    return 0;
}