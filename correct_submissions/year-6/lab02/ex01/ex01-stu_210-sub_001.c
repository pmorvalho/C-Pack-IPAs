
#include <stdio.h>

int main() 
{
    int n1, n2, n3, m;
    scanf("%d %d %d", &n1, &n2, &n3);
    m = n1 > n2 ? n1 : n2;
    m = m > n3 ? m : n3;
    printf("%d\n", m);
    return 0;
}
