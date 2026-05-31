

#include <stdio.h>

int main() {
 
    int  a,b,c,place;

    if (scanf("%d%d%d", &a, &b, &c) != 3) return 1;

    if (a > b) place = a, a = b , b = place;
    if (a > c) place = a , a = c , c = place;
    if (b > c) place = b , b = c, c = place;

    printf ("%d %d %d\n", a, b, c);

    return 0;
}