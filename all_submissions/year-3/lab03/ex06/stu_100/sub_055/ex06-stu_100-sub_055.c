

#include <stdio.h>

int main() {
    int c, sum = 0;

    while ((c = getchar()) != EOF)
    {
        if ('0' <= c && c<= '9')
            sum += c - '0';
        
    }

    printf("%s\n", sum % 9 ? "no" : "yes");

    return 0;
}