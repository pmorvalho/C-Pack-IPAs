
#include <stdio.h>

int main(){
    int x1, x2, x3;
    scanf("%d%d%d", &x1, &x2, &x3);
    return printf("%d\n", x1>x2?(x1>x3?x1:x3):(x2>x3?x2:x3))==EOF;
}