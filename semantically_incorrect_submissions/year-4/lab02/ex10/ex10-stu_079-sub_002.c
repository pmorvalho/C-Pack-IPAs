

#include <stdio.h>

int main() {

    int n, dig = 0, soma_dig = 0;

    scanf("%d", &n);

    while (n != 0) {
        dig++;
        soma_dig += n % 10;
        n /= 10;
    }

    printf("%d\n", dig);
    printf("%d", soma_dig);

    return 0;
}
