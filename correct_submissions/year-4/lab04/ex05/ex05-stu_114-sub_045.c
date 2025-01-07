#include <stdio.h>
#define LEN 100


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
    char linha[LEN];
    leLinha(linha);
    printf("%s\n", linha);

    return 0;
}
