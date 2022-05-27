#include <stdio.h>

int N, M;

int main()
{
    scanf("%d", &N);
    scanf("%d", &M);
    
    if(N % M == 0)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}

