

#include <stdio.h>

int main(){
    int n1,n2;
    scanf("%d,%d", &n1, &n2);
    if (n1 > n2)
        printf("%d\n%d", n2, n1);
    else
        printf("%d\n%d", n1,n2);
    return 0;
}