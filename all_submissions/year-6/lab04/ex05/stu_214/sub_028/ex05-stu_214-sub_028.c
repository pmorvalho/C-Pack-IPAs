
#include<stdio.h>

#define MAX 81

int leLinha(char s[]) {
    int c, i = 0;

    while ((c = getchar()) != '\n' && c != EOF && i < MAX - 1) {
        s[i] = c;
        i++;
    }

    s[i] = '\0';  
    return i;     
}

int main() {
    char linha[MAX];
    int n;

    n = leLinha(linha);

    if (n >= 0) {
        printf("%s\n", linha);
    }

    return 0;
}