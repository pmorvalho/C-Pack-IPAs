

#include <stdio.h>

#define MAX 80

int leLinha(char str[]);
void maiusculas(char str[]);

int main() {
    char str[MAX];
    int i, len = leLinha(str);
    maiusculas(str);
    for (i = 0; i < len - 1; i++)
        printf("%c", str[i]);
    printf("%c\n", str[i]);
    return 0;
}

int leLinha(char str[]) {
    int len = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n' && len < (MAX - 1)) {
        str[len] = c;
        len++;
    }
    str[len + 1] = '\0';
    return len;
}

void maiusculas(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
}