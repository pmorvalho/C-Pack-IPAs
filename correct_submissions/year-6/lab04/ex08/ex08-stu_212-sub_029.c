
#include <stdio.h>
#include <string.h>
int main() {
    char s[105], c[105];
    scanf("%s\t%s", s, c);
    if (strcmp(s, c) > 0) {
        printf("%s\n", s);
    } else (printf("%s\n", c));
    return 0;
}   