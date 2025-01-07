

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    int i_a = 0, i_b = 0;
    int size = 0;
    char digit;
    char a[MAX], b[MAX];

    while ((digit = getchar()) != ' ' && i_a < MAX-1 && digit != EOF) {
        size++;
        a[i_a++] = digit;
    }

    a[i_a] = '\0';

    while ((digit = getchar()) != EOF && 0 < size--)
        b[i_b++] = digit;

    b[i_b] = '\0';

    if (strcmp(a,b) > 0)
        puts(a);
    else
        puts(b);

    return 0;
}