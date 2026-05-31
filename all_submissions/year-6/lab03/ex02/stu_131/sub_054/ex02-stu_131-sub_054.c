
#include <stdio.h>

void piramide(int n){

    int m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("  ");
        }

        for(m=1; m<=i; m++){
            if(m==1) printf("%d", m); else printf(" %d", m);
        }

        for(m=i-1; m>=1; m--){
            printf(" %d", m);
        }

        printf("\n");
        
    }
}

int main(){
    
    int n;

    if(scanf("%d", &n) != 1 || n<2) return 2;

    piramide(n);

    return 0;
}