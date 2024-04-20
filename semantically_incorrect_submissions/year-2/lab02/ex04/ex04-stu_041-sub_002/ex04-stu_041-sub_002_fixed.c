#include <stdio.h>





int main()
{
    int n1, n2, n3, tmp;
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n3)
    {
        tmp = n1;
        n1 = n3;
        n3 = tmp;
    }
    if (n2 > n3)
    {
        tmp = n2;
        n2 = n3;
        n3 = tmp;
    }
    if (n1 > n2) { tmp = n1;n1 = n2;n2 = tmp; }
    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}
