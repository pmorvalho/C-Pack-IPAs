
#include <stdio.h>

int main(){
    int m, n;
    scanf("%d %d", &n, &m);
    if(n % m == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}