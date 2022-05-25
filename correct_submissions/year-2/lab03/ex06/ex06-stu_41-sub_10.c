#include <stdio.h>






#define FORA 0
#define DENTRO 1
#define ESC 2





int main()
{
    int c, rdig;
    int s = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        rdig = c - 48;
        s += rdig;
    }
    s % 9 == 0 ? printf("yes\n") : printf("no\n");

    return 0;
}
