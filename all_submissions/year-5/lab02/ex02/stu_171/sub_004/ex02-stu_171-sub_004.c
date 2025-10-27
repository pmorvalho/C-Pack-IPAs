
#include <stdio.h>

int main() {
    int num, num2;
    scanf("%d", &num);
    scanf("%d", &num2);
    if (num > num2) {
        printf("%d\n%d\n", num2, num);
    } else {
        printf("%d\n%d\n", num, num2);
    }
    return 0;
}