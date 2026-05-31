
#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d\n", &m, &n);
    (n > 0 && m > 0 && m%n == 0)?printf("yes\n"):printf("no\n");
    return 0;
}