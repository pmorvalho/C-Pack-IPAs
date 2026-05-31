
#include <stdio.h>

void cruz(int n){
    int i,j;

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==j || i+j==n+1) printf("*"); else printf("-");
            if(j<n) printf(" ");
        }
        printf("\n");
    }       
}

int main(){
    int n;

    if(scanf("%d",&n) != 1) return 2;

    cruz(n);

    return 0;
}