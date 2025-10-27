
#include <stdio.h>

int leLinha(char s[]);

int main() {
    char n;
    int i;
    scanf("%s", n);
    i = leLinha(n);
    printf("%s\n", n);
    return 0;
}

int leLinha(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        ++i;
    }
    return i;
}