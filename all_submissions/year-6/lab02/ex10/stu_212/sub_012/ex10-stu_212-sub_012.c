
#include <stdio.h>
int main() {
    int num;
    int acc = 0, i = 0;
    scanf("%d", &num);
    int tmp;
    while (num > 0) {
        tmp = num % 10;
        acc += tmp;
        num = num / 10;
        ++i;
    }
    printf("%d\n%d\n", i, acc);
    return 0;
}