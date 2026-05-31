


#include <stdio.h>  

void piramide (int n){
    int linha,j;
    for (linha = 1; linha <= n; linha++){
        for (j=0; j < n - linha; j++)
            printf("  ");
        printf("1");
        for (j=2; j <= linha; j++)
            printf(" %d",j);
        for (j = linha -1; j > 0; j--)
            printf(" %d",j);
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    piramide (n);
    return 0;
}