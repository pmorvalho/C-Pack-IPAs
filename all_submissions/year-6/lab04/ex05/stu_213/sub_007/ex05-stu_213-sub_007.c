

#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    return i;
}

int main() {
    char linha[MAX];
    leLinha(linha);
    printf("%s\n", linha);
    return 0;

}