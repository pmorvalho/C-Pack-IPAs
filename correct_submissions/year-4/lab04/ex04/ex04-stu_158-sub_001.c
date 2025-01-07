
#include <stdio.h>
#include <string.h>
#define MAX 80

int main() {
    char s[MAX];
    int pos, size, n = 0;

    scanf("%s", s);
    size = strlen(s);
    for (pos = 0; pos < size / 2; pos++) {
        if (s[pos] != s[size - 1 - pos]) {
            n = 1;
        }
    }
    printf(n == 0 ? "yes\n" : "no\n");

    return 0;
}