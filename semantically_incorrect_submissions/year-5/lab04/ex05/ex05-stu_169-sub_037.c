
#include <stdio.h>
#define MAX 80





void leLinha(char seq[MAX]) {
    fgets (seq, MAX, stdin); 
}

int main() {
    char seq[MAX];

    leLinha(seq);

    printf("%s", seq);

    return 0;
}
