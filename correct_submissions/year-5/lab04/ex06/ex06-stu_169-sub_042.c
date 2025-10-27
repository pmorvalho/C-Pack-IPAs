

#include <stdio.h>
#define MAX 80

int leLinha(char seq[MAX]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && i < (MAX - 1)) 
        seq[i++] = c;
    
    seq[i] = '\0';

    return 0;
}

void maiusculas(char seq[MAX]) {
    int i = 0;

    for(i = 0; seq[i] != '\0'; i++) {
        if (seq[i] >= 'a' && seq[i] <= 'z')
            seq[i] = seq[i] - 32;
        
        else if (seq[i] == ' ' || (seq[i] >= 'A' && seq[i] <= 'z'))
            continue;
    }
}

int main() {
    char seq[MAX];

    leLinha(seq);

    maiusculas(seq);

    printf("%s\n", seq);

    return 0;
}