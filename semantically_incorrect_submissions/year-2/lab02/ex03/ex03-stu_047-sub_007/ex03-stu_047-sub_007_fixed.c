#include <stdio.h>

int main()
{
    int n, m;
    
    scanf("%d\n%d", &n, &m);
    if(n % m == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
