
#include <stdio.h>
int main(){
    int c, d, n, m;
    scanf("/'%d,%d/'\n",&n, &m);
    c = n > m ? n : m;
    d = n < m ? n : m;
    printf("%d\n%d", d, c);
    return 0;
}