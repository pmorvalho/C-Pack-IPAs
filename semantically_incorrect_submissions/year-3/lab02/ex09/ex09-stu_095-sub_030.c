

#include <stdio.h>
int main()
{
    int N, h, m, s;
    scanf("%d", &N);
    h=N/3600;
    N=N-h*3600;
    m=N/60;
    s=N-m*60;
    printf("%.2d:%.2d:%.2d", h, m, s);
    return 0;

}