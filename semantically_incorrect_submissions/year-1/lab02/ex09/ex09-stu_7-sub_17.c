#include <stdio.h>



int main()
{
    int N, h, m;

    scanf("%d", &N);
    
    h = N / 3600;
    N = N % 3600;
    m = N / 60;
    N = N % 60;

    printf("%02d:%02d:%02d", h, m, N);

    return 0;
}
