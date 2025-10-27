
#include <stdio.h>
#include <ctype.h>

int main() {
    int ch, sum = 0;

    while ((ch = getchar()) != EOF) {
        if (isdigit(ch)) sum += ch - '0';
        else break;
    }
    printf("%s\n", sum % 9 == 0 ? "yes" : "no");

    return 0;
}