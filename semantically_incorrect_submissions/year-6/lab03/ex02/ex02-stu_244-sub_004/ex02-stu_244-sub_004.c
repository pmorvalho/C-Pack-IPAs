
#include <stdio.h>

void piramide(int n){
    int i, j;
    for(i=1; i<=n; i++){
        for (j=1; j<=n-i; j++)
            printf("  ");
        for(j=1;j<i; j++)
            printf("%d", j);
        printf("%d", i);
        for(j=i;j>1; j--)
            printf("  ");
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}