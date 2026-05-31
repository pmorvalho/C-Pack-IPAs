
#include <stdio.h>

void piramide(int n){
    int i, j;
    for (i = 1; i <= n; i++){
        j = n - i;
        while (j > 0){
            printf("  ");
            j--;
        }
        for (j = 1; j<=i; j++)
            printf("%d ", j);
        for (j = i - 1; j > 0; j--)
            printf("%d ", j);
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if (n>=2)
        piramide(n);
    return 0;
}