#include <stdio.h>



int main()
{
    int num, i;
    float acc, k;
    scanf("%d", &num);
    scanf("%f", &acc);
    for(i = 1; i < num; ++i)
    {
        scanf("%f", &k);
        acc = acc + k;
    }
    acc = acc/num;
    printf("%.2f\n", acc);
    return 0;
}