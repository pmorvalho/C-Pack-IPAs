

#include <stdio.h>

int main() {
    char c;
    int num;
    while((c = getchar()) != EOF) {
        num = 0;
        while(c != EOF && c != ' ' && c != '\n') {
            c = (9 - (57 % (int)c));
            num = num * 10 + c;
            c = getchar();
        }
        (c == EOF) ? printf("%d", num) : printf("%d%c", num, c);
    }
    printf("\n");
    return 0;
}