

#include <stdio.h>

#define MAX 101

int read_num(char s[]) {
    int i = 0;
    while ((c = getchar()) != ' ' && c != '\n' && c != EOF && i++ < MAX) {
        s[i] = c;
    }

    return i;
}

int main() {
    char n1[MAX], n2[MAX], c;
    int i = 0, l1, l2, bigger_is_1;

    l1 = read_num(n1);
    l2 = read_num(n2);

    bigger_is_1 = 1;

    if (l1 < l2) {
        bigger_is_1 = 0;
    }

    return 0;
}