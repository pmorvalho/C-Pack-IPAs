
#include <stdio.h>



#define INICIO 1

int main()
{
    int i, n;
    scanf("%d", &n);
    for(i = INICIO; i <= n; i++)
        printf("%d\n", i);
    return 0;
}