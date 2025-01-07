

#include <stdio.h>

int main() {
    int n;
    int i = 0, max = 0;
    scanf("%d", &n);
    int v[n];

    while (i++ < n) {
        scanf("%d", &v[i]);
        max = v[i] > max ? v[i] : max;
    }

    for (int i = 1; i <= max; i++) {
        for (int j = 1; j <= n; j++) {
            if (v[j - 1] >= i) printf("*"); 
            else printf(" "); 
        }
        printf("\n");
    }
    return 0;
}
