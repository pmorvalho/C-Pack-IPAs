
#include <stdio.h>

int main() {
    int value;

    scanf("%d", &value);

    for(int i = 1; i <= value; i++) {
        printf("%d\n", i);
    }

    return 0;
}