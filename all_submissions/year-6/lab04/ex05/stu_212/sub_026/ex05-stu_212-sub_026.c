
#include <stdio.h>
int leLinha(char s[]) {
    int c, j = 0;
    while ((c = getchar()) != EOF && c != '\n') {
        s[j] = c;
        j++;
    }
    s[j] = '\0';
    return j;
}

int main() {
    char linha[1000];
    leLinha(linha);
    printf("%s\n", linha);
    return 0;
}
