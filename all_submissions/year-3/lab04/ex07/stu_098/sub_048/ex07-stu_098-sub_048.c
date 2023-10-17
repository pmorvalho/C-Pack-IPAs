

#include <stdio.h>

#define MAX 80

int leLinha(char s[]);

int main() {

    int i, j = 0;
    char s[MAX], c, o[MAX];

    leLinha(s);
    scanf("%c", &c);

    for (i = 0; i < MAX; i++) {
        if (s[i] != c) {
            o[j] = s[i];
            j++;
        }
    }

    printf("%s\n", o);

    return 0;
}

int leLinha(char s[]) {

    int c, i = 0;

    c = getchar();
    while (c != EOF && c != '\n' && i < MAX - 1) {
        s[i] = c;
        i++;
        c = getchar();
    }
    s[i] = '\0';

    return i;
}