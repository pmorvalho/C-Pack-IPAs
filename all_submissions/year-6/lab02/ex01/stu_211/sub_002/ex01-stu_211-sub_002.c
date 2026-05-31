
#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b) b=a;
    if (b>c) c=b;
    if (a>c) c=a;
    printf("%d\n",c);
    return 0;
}