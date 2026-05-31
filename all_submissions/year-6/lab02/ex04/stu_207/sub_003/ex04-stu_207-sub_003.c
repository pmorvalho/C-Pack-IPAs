
#include <stdio.h>
int main(){
    int a, b, c, menor, n1, n2;
    scanf("%d%d%d", &a, &b, &c);
    if (a <= b && a <= c) {
        menor = a;
        n1 = b;
        n2 = c;
    }
    else if (b<=c) {
        menor = b;
        n1 = a;
        n2 = c;
    }
    else {
        menor = c;
        n1 = a;
        n2 = b;
    }
    if (n1<n2)
        printf("%d %d %d\n", menor, n1, n2);
    else
        printf("%d %d %d\n", menor, n2, n1);
    return 0;
}