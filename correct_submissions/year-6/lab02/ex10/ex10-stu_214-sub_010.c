
#include<stdio.h>
int main(){
    int n, i = 1, s = 0;
    scanf("%d", &n);
    while (n >= 10) {
        i++;
        s+= n % 10;
        n = n / 10;
    } printf("%d\n%d\n", i, s+n);
    return 0;
}