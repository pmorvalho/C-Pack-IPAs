
#include <stdio.h>

void quadrado(int n){
    for(int i= 1; i<=n; i++){
        int num = i;
        printf("%d\t", num);
        for( int j= 1; j<n; j++){
            printf("%d",num + j);
            if(j!=n-1){
                printf("\t");
            }
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