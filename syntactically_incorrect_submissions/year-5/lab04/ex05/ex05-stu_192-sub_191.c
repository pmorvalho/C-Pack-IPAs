
#include <stdio.h>

int leLinha(char s[]);

int main() {
    int e;
    char s[] = scanf("%s");
    e = leLinha(s);
    printf("%d", e);
    return 0;
}

int leLinha(char s[]) {
    int i = 1;
    char n;
    n = getchar();
    while(n != '\n' && n != EOF) {
        ++i;
    }
    return i;
}