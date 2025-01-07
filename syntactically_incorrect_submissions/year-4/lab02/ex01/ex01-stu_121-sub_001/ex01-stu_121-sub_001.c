
#include <stdio.h>

int main()
{
    int x1,x2,x3;

    scanf("%d%d%d",&x1,&x2,&x3);
    int result = x1>x2? (x1>x3? x1:x3) : (x2>x3? x2:x3);
    printf("%d\n",result);

return 0;
}