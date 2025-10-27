
#include <stdio.h>
#define MAX 80





int leLinha(char seq[MAX]) {
    fgets (seq, MAX, stdin);

    return 0;
}

int main() {
    char seq[MAX];

    leLinha(seq);

    printf("%s", seq);

    return 0;
}
