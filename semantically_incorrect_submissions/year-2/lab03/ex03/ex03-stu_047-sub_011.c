#include <stdio.h>

void cruz(int n){
    int i = 1, j;
    while(i <= n){
        for(j = 1; j <=n; j++){
            if(j == i || j == (n + 1 - i))
                printf("* ");
            else
                printf("- ");
        }
        printf("\n");
        i++;
    }
    return;
}


int main(){
    int n;
    printf("Introduza um número.\n");
    scanf("%d", &n);
    cruz(n);
    return 0;
}