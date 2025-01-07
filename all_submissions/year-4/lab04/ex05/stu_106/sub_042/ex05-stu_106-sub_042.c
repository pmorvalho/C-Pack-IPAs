
#include <stdio.h>
#define MAX 1000

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0';
    return i;
}

int main() {
    char str[MAX];

    leLinha(str);
    printf("%s\n", str);

    return 0;
}
