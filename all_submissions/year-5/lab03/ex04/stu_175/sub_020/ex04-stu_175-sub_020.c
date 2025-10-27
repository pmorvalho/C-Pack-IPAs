
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
    char seq[100];
    int idx = 0, state = OUT;
    int c;
    while ((c = getchar()) != EOF) {
        if (idx < sizeof(seq) - 1) {
            seq[idx++] = c;
        }
    }
    seq[idx] = '\0';
    idx = 0;
    while (seq[idx] != '\0') {
        if (seq[idx] == '0') {
            if (state == IN) {
                printf("%c", seq[idx]);
            } else if (seq[idx + 1] == ' ' || seq[idx + 1] == '\0') {
                printf("%c", seq[idx]);
            }
        } else if (seq[idx] == ' ') {
            printf("%c", seq[idx]);
            state = OUT;
        } else {
            printf("%c", seq[idx]);
            state = IN;
        }
        idx++;
    }
    return 0;
}
