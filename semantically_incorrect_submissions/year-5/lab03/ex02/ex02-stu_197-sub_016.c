
#include <stdio.h>

void piramide(int n){
    int i , j;
    for(i=1;i<=n;i++){
        for(j=n-i;j>0;j--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=i;j>1;j--){
            printf("%d ",j-1);
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    piramide(n);

    return 0;
}