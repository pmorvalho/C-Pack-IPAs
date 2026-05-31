
#include <stdio.h>
int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    if (n>=m){
        printf("%d\n", n);
        printf("%d\n", m);
    }
    else {
        printf("%d\n", m);
        printf("%d\n", n);
    }
    return 0;
}