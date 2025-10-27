

# include <stdio.h>

int leLinh(char s[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}

void maiusculas(char s[]) {
    int i = 0, len;

    len = leLinh(s);
    if (len == 0) return;
    while (i < len) {
        if ('a' <= s[i] && s[i] <= 'z') {
            s[i] = s[i] - ('a'-'A');
        }
        i++;
    }
}

int main() {
    char s[100];
    int i = 0;

    maiusculas(s);

    while(s[i] != '\0') {
        putchar(s[i]);
        i++;
    }
    putchar('\n');
    return 0;
}
