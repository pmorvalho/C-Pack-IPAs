
#include <stdio.h>
int main()
{
    int x1,x2;
    scanf("%d%d",&x1,&x2);
return printf("%d\n%d\n",x1<x2?x1:x2,x1<x2?x2:x1)==EOF;
}