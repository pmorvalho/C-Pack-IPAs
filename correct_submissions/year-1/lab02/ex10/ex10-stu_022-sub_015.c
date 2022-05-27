#include <stdio.h>

int main() {
    int n,i,soma,k;
    scanf("%d", &n);
    soma =0;
    for(i=0;n!=0;++i) {
        k = n%10;
        soma += k;
        n = n/10;
    }
    printf("%d\n%d\n",i,soma);
    return 0;
}