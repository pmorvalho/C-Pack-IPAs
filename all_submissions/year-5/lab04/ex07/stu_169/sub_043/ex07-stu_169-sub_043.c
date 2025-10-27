

#include <stdio.h>
#define MAX 80

void leLinha(char seq[MAX]) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != EOF && i < MAX - 1) 
        seq[i++] = c;
    
    seq[i] = '\0';
}

void apagaCaracter(char seq[MAX], char c) {
    int i, j = 0;

    for (i = 0; seq[i] != '\0'; i++) {
        if (seq[i] != c) {
            seq[j] = seq[i];  
            j++;              
        }
    }

    seq[j] = '\0';
}

int main() {
    char seq[MAX], c;

    leLinha(seq);

    scanf("%c", &c); 
    
    apagaCaracter(seq, c);

    printf("%s\n", seq);

    return 0;
}