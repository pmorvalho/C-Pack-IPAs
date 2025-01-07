
#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    int comparisson;

    scanf("%s %s", a, b);
    comparisson = strcmp(a, b);
    printf("%s\n", comparisson > 0 ? a : b);

    return 0;
}