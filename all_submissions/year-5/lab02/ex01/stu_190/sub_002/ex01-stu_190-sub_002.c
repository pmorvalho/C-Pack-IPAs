

# include <stdio.h>

int main() {
    int i = 0, n = 0, k = 0;
    scanf("%d", &n);
    while (i < 2) {
        scanf("%d", &k);
        if (k > n) {
            n = k;
        }
        i++;
    }
    printf("O maior número é: %d\n", n);
    return 0;
}