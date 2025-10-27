
#include <stdio.h>

int main() {
    int ch, calc = 0, num = 0, sum = 1;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') break;
        else if (ch == '-') {
            if (sum) calc += num;
            else calc -= num;
            num = 0;
            sum = 0;
        } else if (ch == '+') {
            if (sum) calc += num;
            else calc -= num;
            num = 0;
            sum = 1;
        } else if (ch != ' ') num = num * 10 + (ch - '0');
    }
    if (sum) calc += num;
    else calc -= num;
    printf("%d\n", calc);

    return 0;
}