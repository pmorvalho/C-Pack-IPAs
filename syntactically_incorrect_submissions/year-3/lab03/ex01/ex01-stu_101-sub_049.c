

#include <stdio.h>

void quadrado(int n){
    int n,i=1, j=1;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j=1)
                printf("%d",i+j-1);
            else
                printf("\t%d",i+j-1);
        }
        putchar('\n');
    }
}

int main(){
    int n;
    scanf("%d\n", &n);
    quadrado(n);
    return 0;
}