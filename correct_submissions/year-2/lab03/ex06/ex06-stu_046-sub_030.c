#include <stdio.h>

int main()
{
    int c, s = 0;

    while((c = getchar()) != EOF)
        s += (c - '0');
    
    if(s % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    
    return 0;
}