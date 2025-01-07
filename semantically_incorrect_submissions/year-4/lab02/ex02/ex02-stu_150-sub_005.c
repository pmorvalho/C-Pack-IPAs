

#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d",&M, &N);
    if(M < N) printf("%d\n%d",M,N);
    else printf("%d\n%d",N,M);
    return 0;
}