
#include <stdio.h>

void ex02_v1(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n%d\n", (a<b)?a:b, (a<b)?b:a);
}

int main(){
    ex02_v1();
    return 0;
}