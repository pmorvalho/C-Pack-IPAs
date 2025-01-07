

#include <stdio.h>

void piramide(int n);

int main()
{
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}




void piramide(int n)
{
    int espacos = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        
        
        for (int e = espacos; e > 0; e--) {
            printf(" ");
        }

        for (int j = 1; j < i; j++) {
            printf("%d ", j);
        }
        printf("%d", i);
        
        for (int k = i - 1; k > 0; k--) {
            printf(" %d", k);
        }
        printf("\n");
        espacos -= 2; 
    }
}
