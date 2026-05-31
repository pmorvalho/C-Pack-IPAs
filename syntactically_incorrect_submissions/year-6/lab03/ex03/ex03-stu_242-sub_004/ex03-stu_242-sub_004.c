
#include <stdio.h>

int main(){
    int n,l,r,j;
    scanf("%d",&n);
    l=1;
    r=n;
    while(l<=n){
        for(j=1;j<n;j++)
            printf("%c ",j==l||j==r?"*":"-");
            printf("%c\n",j==l?"*":"-");
        l++;
        r--;
    }
return 0;
}