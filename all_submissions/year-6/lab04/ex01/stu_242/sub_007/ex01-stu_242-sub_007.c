
#include <stdio.h>
#define MAX 100

int main(){
    int n,i,j;
    int vec[MAX];
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&vec[i]);
    for(i=0;i<n;i++){
        for(j=1;j<=vev[i];j++) putchar('*');
        putchar("\n");
        }
    return 0;
}