
#include <stdio.h>

int main()
{
    int x1,x2,x3,max,min,med;
    scanf("%d %d %d",&x1,&x2,&x3);
    max = x1>x2? (x1>x3? x1:x3) : (x2>x3? x2:x3);
    min = x1<x2? (x1<x3? x1:x3) : (x2<x3? x2:x3);
    med = x1<x2? (x1>x3?x1:x3) : (x2>x3?x2:x3);  
    printf(" max : %d\n",max);
    printf("med :%d\n",med);
    printf("min :%d\n",min);
    return printf("%d %d %d\n",min,med,max)== EOF ;
}