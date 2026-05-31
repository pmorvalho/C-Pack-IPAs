
#include <stdio.h>
int main() {
    int n,i,sum=0;
    scanf("%d", &n);
    for(i=0; n>0; i++) {
        sum += n%10;
        n = n/10;
    }
    printf("%d\n%d\n", i, sum);
    return 0;
}