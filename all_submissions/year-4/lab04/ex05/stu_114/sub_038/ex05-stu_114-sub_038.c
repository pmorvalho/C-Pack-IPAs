
#include <stdio.h>
#define LEN 100

int leLinha(char linha[]) {
    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        linha[i++] = c;
    }
    linha[i] = '\0';
    return i;
}

int main() {
    char linha[LEN];
    leLinha(linha);
    printf("%s\n", linha);

    return 0;
}
