

#include <stdio.h>

void piramide(int n) {
    int i, j, k, m;
    while (n < 2)
        scanf("%d", &n);
    m = n;
    for (i = 1; i <= n; i++) { 
        for (j = (m - 1); j > 0; j--) { 
            printf("  ");
        }
        
        k = i;
        for (j = 1; j < k; j++) 
            printf("%d ", j);    
        while (k > 1) {
            printf("%d ", k); 
            k--;
        }
        printf("1\n"); 
        m--;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}