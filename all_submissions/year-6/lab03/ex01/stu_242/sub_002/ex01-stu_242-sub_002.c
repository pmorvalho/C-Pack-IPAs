
#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<n;j++)
        printf("%d%c",i+j,j==n?"\n":"\t");
    }
return 0;
}
