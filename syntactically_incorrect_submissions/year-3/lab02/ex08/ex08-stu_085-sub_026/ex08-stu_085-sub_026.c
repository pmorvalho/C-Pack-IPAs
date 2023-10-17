
#include <stdio.h>

int main()
{
    int num, i;
    float flo, res=0;
    scanf("%d", &num);
    for(i=0;i<num; i++)
    {
        scanf("%f", flo);
        res+= flo;
    };
    printf("%d7n", res/num);
    return 0;
}