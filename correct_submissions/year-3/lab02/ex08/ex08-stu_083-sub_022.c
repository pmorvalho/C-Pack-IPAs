
#include <stdio.h>

int main(){
    int n,i;
    float current,sum,media;
    i=1;
    sum=0;
    scanf("%d",&n);
    while (i++<=n)
    {
        scanf("%f",&current);
        sum=sum+current;
    }
    media=sum/n;
    printf("%.2f\n", media);
    return 0;
}