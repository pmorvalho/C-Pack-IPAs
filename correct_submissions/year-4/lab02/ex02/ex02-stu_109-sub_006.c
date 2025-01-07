
#include <stdio.h>

int main(){
    int n, m;

    scanf("%d%d", &n, &m);

    printf("%d\n%d\n", n < m? n : m, m > n? m : n);

    return 0;
}