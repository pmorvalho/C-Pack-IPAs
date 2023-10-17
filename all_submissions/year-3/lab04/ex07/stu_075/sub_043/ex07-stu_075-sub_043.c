

#include <stdio.h>

#define MAX 80

int leLinha(char str[]);
void apagaCaracter(char str[], char c);

int main() {
    char str[MAX], c;
    leLinha(str);
    scanf("%c", &c);
    apagaCaracter(str, c);
    printf("%s\n", str);
    return 0;
}

int leLinha(char str[]) {
    int len = 0;
    char c;
    while ((c = getchar()) != EOF && c != '\n' && len < (MAX - 1)) {
        str[len] = c;
        len++;
    }
    str[len] = '\0';
    return len;
}

void apagaCaracter(char str[], char c) {
    int i = 0, j;
    while (str[i] != '\0') {
        if (str[i] == c) {
            j = i;
            while (str[j + 1] != '\0') {
                str[j] = str[j + 1];
                j++;
            }
            str[j] = str[j + 1];
        }
        else
            i++;
    }
}