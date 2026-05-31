

#include <stdio.h>

int main() {
    char n[100];
    if (scanf("%99s", n) == 1) {
        if ((n[0] / 9) % 2 == 0) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}