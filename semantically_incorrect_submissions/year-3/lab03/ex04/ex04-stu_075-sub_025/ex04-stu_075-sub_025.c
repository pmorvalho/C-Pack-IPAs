

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int charToDecimal(char c);
int strToInt(char lastDigit);

int main() {
    char c;
    int num, first = TRUE;
    while((c = getchar()) != EOF) {
        if (first == TRUE)
            first = FALSE;
        else
            printf(" ");
        if (c == ' ' || c == '\n')
            continue;
        num = strToInt(c);
        printf("%d", num);
    }
    printf("\n");
    return 0;
}

int charToDecimal(char c) {
    return (9 - (57 % (int)c));
}

int strToInt(char lastDigit) {
    char c;
    int num = charToDecimal(lastDigit);
    while((c = getchar()) != EOF && c != ' ' && c != '\n') {
        c = charToDecimal(c);
        num = num * 10 + c;
    }
    return num;
}