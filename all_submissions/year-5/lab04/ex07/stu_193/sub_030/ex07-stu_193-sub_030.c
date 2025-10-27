

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

void apagaCaracter(char s[], char c) {
    int i = 0 ,j = 0;

    while (s[i] != '\0') {
        if (s[i] != c) {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] ='\0';
}

int main() {
    char s[100],c;
    int len,i = 0;

    len = leLinh(s);
    c = getchar();
    if (len > 0) {
        apagaCaracter(s,c);
    }
    while (s[i] != '\0') {
        putchar(s[i]);
        i++;
    }
    return 0;
}

