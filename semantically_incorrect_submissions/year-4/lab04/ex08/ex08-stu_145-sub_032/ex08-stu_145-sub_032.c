

#include <stdio.h>

#define DIMMAX 100

int main() {
    int i = 0, j = 0, current, checked = 0;
    char s[DIMMAX];
    while ((current = getchar()) != ' ') {
        s[i] = current;
        ++i;
    }
    for (j = 0; j <= i; ++j) {
        current = getchar();
        if (checked == 0) {
            if (s[j] > current) {
                printf("%c", s[j]);
                checked = 1;
            } else if(s[j] < current) {
                printf("%c", current);
                checked = 2;
            } else {
                printf("%c", s[j]);
            }
        } else if (checked == 1) {
            printf("%c", s[j]);
        } else {
            printf("%c", current);
        }
    }
    printf("\n");
    return 0;
}