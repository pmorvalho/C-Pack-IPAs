
#include <stdio.h>

int main() {
    int value1, value2, value3, temp;

    scanf("%d %d %d", &value1, &value2, &value3);

    if (value1 > value2) {
        temp = value1;
        value1 = value2;
        value2 = temp;
    }
    if (value1 > value3) {
        temp = value1;
        value1 = value3;
        value3 = temp;
    }
    if (value2 > value3) {
        temp = value2;
        value2 = value3;
        value3 = temp;
    }

    printf("%d %d %d\n", value1, value2, value3);

    return 0;
}