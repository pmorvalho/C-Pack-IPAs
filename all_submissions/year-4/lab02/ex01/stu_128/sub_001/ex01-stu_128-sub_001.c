
#include <stdio.h>

int max(int x,int y,int z)
{
if (x > y && x > z)
{printf("%d\n",x);}

else if (y > x && y > z)
{printf("%d\n",y);}

else if (z > x && z> y)
{printf("%d\n",z);}
}

int main()
{
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);
    max(x,y,z);
    return 0;
}