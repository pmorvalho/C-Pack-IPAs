

#include <stdio.h>

void ex01_v1();

int main(){
    ex01_v1();
    return 0;
}

void ex01_v1(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", ((a > b)? ((a > c)? a : c) : ((b > c)? b : c)));
}