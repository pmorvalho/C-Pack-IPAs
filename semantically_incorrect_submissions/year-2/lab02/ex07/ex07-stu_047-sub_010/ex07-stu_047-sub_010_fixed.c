#include <stdio.h>

int main()
{
    int n, div = 0, i = 1;
 
    scanf("%d", &n);
    while(i <= n){
        if(n % i == 0)
            ++div;
        ++i;
    }
    printf("%d\n", div);
    return 0;
}
