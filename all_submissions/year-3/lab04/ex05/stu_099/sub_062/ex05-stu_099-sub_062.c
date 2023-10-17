
#include <stdio.h>

#define MAX 80

int leLinha(char s[]) {
    int i = 0, c;

    for (i = 0; i < MAX - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
        s[i] = c;
    }

    s[i] = '\0';

    return i;
}


int main() {
    char linha[MAX];
    
    leLinha(linha);

    printf("%s\n", linha);
    
    return 0;
}
