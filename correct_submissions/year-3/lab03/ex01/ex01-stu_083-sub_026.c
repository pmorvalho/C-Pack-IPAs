
#include <stdio.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=1;i<n;i++){
            printf("%d\t",i+j);
        }
        printf("%d\n",i+j);
    }
    return 0;
}