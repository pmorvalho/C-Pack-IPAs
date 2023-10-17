

#include <stdio.h>

int main() {
    int counter = 0, sum = 0;
    char c;
    while((c = getchar()) != EOF && counter < 101) {
        if (('0' <= c) && (c <= '9'))
            sum += 9 - (57 % (int)c) ;
        counter++;
    }
    if ((sum % 9) == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}