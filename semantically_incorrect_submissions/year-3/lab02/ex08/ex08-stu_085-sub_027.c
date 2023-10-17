
#include <stdio.h>

int main()
{
    int num, i;
    float flo, media,res=0;
    scanf("%d", &num);
    for(i=0;i<num; i++)
    {
        scanf("%f",&flo);
        res= res+flo;
    };
    media= res/num;
    printf("%.2f", media);
    return 0;
}