
#include <stdio.h>
int main(){
    int resto, n, m;
    scanf("%d,%d", n, m);
    resto = n % m;
    if (resto == 0)
        printf("yes");
    else
        printf("no");
    return 0;
}