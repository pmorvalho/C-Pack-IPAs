
#include <stdio.h>

int main(){

    int a,b;

    if(scanf("%d %d",&a,&b)) a=b; else return a;
    if (a>b) printf("%d\n%d",a,b); else printf("%d\n%d",b,a);
    return 0;
}