
#include<stdio.h>
void piramide(int n){
    int i,j, k;

    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            for(k=1;k<=(n-j)*2;k++)
                printf("*");
            for(n=1;n<=j;n++)
                printf("%d",n);
            for(n=j-1; n>0;n--)
                printf("%d",n);
        }
        printf("\n"); 
    }
}

int main(){
    int n;
    scanf("%d",&n);
    printf(" ");
    if(n>=2)
        piramide(n);
    return 0;
}