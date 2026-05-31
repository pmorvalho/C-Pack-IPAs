
#include <stdio.h>

int main() {
    int a;
    int num = 1;
    scanf("%d", &a);

    while (num <= a) {
        printf("%d\n", num);
        num++;
    }
}