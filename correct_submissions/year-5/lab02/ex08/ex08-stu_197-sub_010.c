
#include <stdio.h>

int main()
{
    int total,i;
    float num, media=0;
    scanf("%d",&total);
    for(i=total;i>0;i--){
        scanf("%f",&num);
        media+=num;
    }
    printf("%.2f\n",media/total);
    return 0;
}