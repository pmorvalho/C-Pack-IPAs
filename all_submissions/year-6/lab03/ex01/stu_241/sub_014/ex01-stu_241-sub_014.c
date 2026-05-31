
#include <stdio.h>

void quadrado(int n){
    int i,j;
    for (i=1; i <= n; i++){
        for(j=i; j<n+i; j++){
            printf("%d",j);
            if (j!=n+i-1)
                printf("\t");
            }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}