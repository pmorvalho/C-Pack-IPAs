
#include <stdio.h>
int main() {
    int a, b, c, min, max, meio;
    scanf("%d %d %d",&a, &b, &c);
    min = (a<b && a<c)? a : (b < c ? b : c);
    max = (a>b && a>c)? a : (b > c ? b : c);
    meio = a+b+c - min - max;
    printf("%d %d %d\n", min, meio, max);
    return 0;
}