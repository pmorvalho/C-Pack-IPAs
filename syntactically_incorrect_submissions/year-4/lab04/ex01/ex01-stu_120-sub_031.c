
#include <stdio.h>
#define VECMAX 100

int main() {
    int n = 0, i, temp;
    
    
    while (n <= 0 || n >= VECMAX) {
        scanf("%d", &n);
    }

    
    for (i = 0; i < n; i++) {
        scanf("%d", &temp);
        for (int j = 0; j < temp; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
