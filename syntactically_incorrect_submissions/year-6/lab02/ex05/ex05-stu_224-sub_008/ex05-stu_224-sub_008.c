
#include <stdio.h>

int main() {
    int a;
    int num = 0;
    scanf("%d", &a);

    while (num <= a) {
        printf("%d\n", num);
        num++;
    }
}