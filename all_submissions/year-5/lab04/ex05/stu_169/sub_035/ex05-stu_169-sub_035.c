
#include <stdio.h>
#define MAX 80

int leLinha(char seq[MAX]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && i < MAX - 1) 
        seq[i++] = c;
    
    seq[i] = '\0';

    return 0;
}

int main() {
    char seq[MAX];

    leLinha(seq);

    printf("%s\n", seq);

    return 0;
}
