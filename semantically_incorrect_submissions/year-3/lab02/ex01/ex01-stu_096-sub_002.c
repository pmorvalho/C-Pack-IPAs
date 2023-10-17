
#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>b && a>c) {
        printf("O maior numero: %d", a);
    }
    if (b>a && b>c){
        printf("o maior numero: %d", b);
    }
    if (c>a && c>b){
        printf("o maior numero: %d", c);
    }
    return 0;
}