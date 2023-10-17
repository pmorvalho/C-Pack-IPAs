

#include <stdio.h>

void cruz(int n) {
    int lin, col;
    for (lin = 1; lin <= n; lin++) {
        for (col = 1; col < n; col++) {
            if ((col == lin) || (col + lin == (n + 1))) 
                printf("* ");
            else {
                printf("- ");
            }         
        }
        if ((lin == n) || (lin == 1)) 
            printf("*\n");
        else
            printf("-\n");
    }
}
int main() {
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}