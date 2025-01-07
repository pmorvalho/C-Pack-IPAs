
#include <stdio.h>

int main(){
    int a, b, c;

    scanf("%d%d%d" , &a, &b, &c);

    printf("%d\n", a > b? (a > c? a : c) : (b > c? b : c));

    return 0;
}