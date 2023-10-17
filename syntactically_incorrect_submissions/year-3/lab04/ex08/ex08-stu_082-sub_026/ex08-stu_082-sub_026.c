

#include <stdio.h>

#define MAX 100

int leLinha(char s[]) {
    int c, comprimento = 0;
    c = getchar();
    while (c != '\n' && c != EOF && c != ' ') {
        s[comprimento] = c;
        comprimento++;
        c = getchar();
    }
    s[comprimento] = '\0';
    return comprimento;
}



int main() {
    char num1[MAX], num2[MAX];
    leLinha(num1);
    leLinha(num2);
    printf("%s\n", maior(num1, num2));
    return 0;
}