#include <stdio.h>

int main() {

    int n, dig = 1;
    
    scanf("%d", &n);

    while (dig <= n) {
        printf("%d\n", dig);
        dig++;
    }

    return 0;
}
