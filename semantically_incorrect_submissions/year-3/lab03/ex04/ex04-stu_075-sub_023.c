

#include <stdio.h>

int main() {
    char c;
    long int num;
    while((c = getchar()) != EOF) {
        num = 0;
        while(c != EOF && c != ' ' && c != '\n') {
            c = (9 - (57 % (int)c));
            num = num * 10 + c;
            c = getchar();
            printf("\n%ld\n", num);
        }
        (c == EOF) ? printf("%ld", num) : printf("%ld%c", num, c);
    }
    return 0;
}