
#include <stdio.h>

int main()
{
    int n, m, ma, me;
    scanf("%d %d", &n, &m);
    ma = n > m ? n : m;
    me = n < m ? n : m;
    printf("%d\n", me);
    printf("%d\n", ma);
    return 0;
}
