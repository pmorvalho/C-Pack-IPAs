

#include <stdio.h>
#include <string.h>

#define DIMMAX 100

int is_pali(char s[]) {
    int i, j;
    for (i = 0, j = strlen(s) - 1; i < j; ++i, --j) {
        if (s[i] != s[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char s[DIMMAX];
    scanf("%s", s);
    printf(is_pali(s) ? "yes\n" : "no\n");
    return 0;
}