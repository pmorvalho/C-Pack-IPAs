
#include <stdio.h>
#define MAX 1000

int leLinha(char s[]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF) {
        s[i++] = c;
    }

    s[i] = '\0';
    return i;
}

int main() {
    char str[MAX];

    leLinha(str);
    printf("%s", str);

    return 0;
}
