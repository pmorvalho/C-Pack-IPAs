
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=2*(n-i);j++)
            printf(" ");
        for (j=1;j<=i;j++){
            if (j==1)
                printf("1");
            else
                printf(" %d",j);
            }
        for (j=i-1;j>=1;j--)
            printf(" %d",j);
        printf("\n");
    }
    return 0;
}