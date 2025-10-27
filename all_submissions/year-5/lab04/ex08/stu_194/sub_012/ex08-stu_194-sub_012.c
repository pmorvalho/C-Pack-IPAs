

#include <stdio.h>

#define MAX 101

int read_num(char s[]) {
    char c;
    int i = 0;

    while ((c = getchar()) != ' ' && c != '\n' && c != EOF && i < MAX) {
        s[i++] = c;
    }

    s[i] = '\0';

    return i;
}

int main() {
    char n1[MAX], n2[MAX];
    int i = 0, l1, l2, bigger_is_1;

    l1 = read_num(n1);
    l2 = read_num(n2);

    bigger_is_1 = 1;

    if (l1 < l2) {
        bigger_is_1 = 0;
    } else if (l1 == l2) {
        for (i = 0; i < l2; i++) {
            if (n1[i] < n2[i]) {
                bigger_is_1 = 0;
                break;
            } else if (n1[i] > n2[i]) {
                break;
            }
        }
    }

    printf("%s\n", bigger_is_1 ? n1 : n2);

    return 0;
}