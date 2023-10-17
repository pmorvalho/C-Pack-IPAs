
#include <stdio.h>

int main()
{
    int num, i;
    float flo, result,res=0;
    scanf("%d", &num);
    for(i=0;i<num; i++)
    {
        scanf("%f", flo);
        res+= flo;
    };
    result= res/num;
    printf("%d\n", result);
    return 0;
}