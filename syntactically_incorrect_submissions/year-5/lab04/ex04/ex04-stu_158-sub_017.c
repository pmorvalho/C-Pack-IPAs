
#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    int len, half;
    char s[MAX];

    scanf("%s", s);
    len = strlen(s);
    half = len / 2;
    for (int ch = 0; ch < half; ch++) {
        if (s[ch] != s[len - 1 - ch]) {
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");

    return 0;
}