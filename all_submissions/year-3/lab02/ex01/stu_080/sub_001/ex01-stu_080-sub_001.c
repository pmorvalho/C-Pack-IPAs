
#include <stdio.h>
int main(){
    int m, n1, n2, n3;
    scanf("%d%d%d\n",&n1, &n2, &n3);
    
    m = n1 > n2 ? n1 : n2;
    m = n3 > m ? n3 : m;

    printf("%d\n", m);
    return 0;
}