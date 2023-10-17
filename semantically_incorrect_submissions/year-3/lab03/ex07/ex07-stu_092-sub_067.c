
#include <stdio.h>

int main() {
    int num, result, c;
    result = 0;
    num = 0;
    c = getchar();
    while (c != '\n') {
        if (c == '+' || c == '-') {
            if (num != 0) {
                if (c == '+') {
                    result += num;
                } else {
                    result -= num;
                }
            }
            num = 0;
        } else if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
        c = getchar();
    }
    if (num != 0) {
        result += num;
    }
    printf("%d\n", result);
    return 0;
}