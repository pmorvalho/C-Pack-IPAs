
#include <stdio.h>
int main(){
    int n,l,r,i;
    scanf("%d",&n);
    l=1;
    r=n;
    while (l<=n){
        for (i=1;i<n;i++)
            printf("%c ",i==l||i==r?'*':'-');
        printf("%c\n",i==l||i==r?'*':'-');
        l++;
        r--;
    }
    return 0;
}