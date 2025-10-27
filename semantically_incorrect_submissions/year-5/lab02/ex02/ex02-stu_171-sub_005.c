
#include <stdio.h>

int main() {
    int num, num2, nummax;
    scanf("%d", &num);
    scanf("%d", &num2);
    if (num > num2) {
        nummax = num;
    } else {
        nummax = num2;
    }
    printf("%d\n%d\n", num, nummax);
    return 0;
}