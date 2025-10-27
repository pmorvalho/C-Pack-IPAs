
#include <stdio.h>
#define MAX 80

int leLinha(char seq[MAX]) {
    int i = 0, caracteres = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && i < MAX - 1) {
        seq[i++] = c;
        caracteres++;
    }
    seq[i] = '\0';

    return caracteres;
}

int main() {
    char seq[MAX];
    int numCaracteres;

    numCaracteres = leLinha(seq);

    printf("%s\n", seq);
    printf("%d\n", numCaracteres);
    
    return 0;
}
