
#include <stdio.h>
int main(){
    int n, m;
    scanf("/'%d,%d/'\n",n,m);
    if (n > m){
        printf("%d\n%d",m,n);
    }
    else{
        printf("%d\n%d",n,m);
    }
    return 0;
}