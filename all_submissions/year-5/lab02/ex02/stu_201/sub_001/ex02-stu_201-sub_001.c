
#include <stdio.h>

int main(){
    int n, m;

    if(scanf("%d%d", &n, &m) != 2)
        return 1;

    if(n > m)
        printf("%d\n%d\n", m, n);
    else        
        printf("%d\n%d\n", n, m);

    return 0;
}