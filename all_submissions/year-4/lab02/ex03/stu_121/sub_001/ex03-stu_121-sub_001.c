
#include <stdio.h>
int main()
{
    int x1,x2;
    scanf("%d%d",&x1,&x2);
    return printf("%s\n", x1%x2==0? "yes":"no")==EOF;
}