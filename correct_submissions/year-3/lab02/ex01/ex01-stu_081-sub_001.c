

#include <stdio.h>

int main(){
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);
    
    m = a > b ? a : b;
    m = c > m ? c : m;

    printf("%d\n", m);

    return 0;
}