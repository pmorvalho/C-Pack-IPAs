
#include <stdio.h>

#define MAX 80

int main() {
    char s[MAX];
    int first = 0, second = 0, final;

    if (fgets(s, MAX, stdin) != NULL) {
        while (s[second] != ' ') second++;
        second++;
        for (first = 0; first < second - 1; first++, second++) {
            if (s[first] > s[second]) {
                second = 0;
                break;
            } else if (s[first] < s[second]) {
                first = 0;
                break;
            } else putchar(s[first]);
        }
        final = first + second;
        while (s[final] != ' ' && s[final] != '\n') {
            putchar(s[final]);
            final++;
        }
        putchar('\n');
    }

    return 0;
}