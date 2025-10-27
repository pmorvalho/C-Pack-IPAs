#include <stdio.h>

void cruz(int n){    
    int i, j;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j==i|| j == n - i - 1){
                printf("* ");
            }
            else printf("- ");
        }
        printf("\n");
    }
}

int main(){
    int n;

    scanf("%d", &n);
    cruz(n);

    return 0;
}