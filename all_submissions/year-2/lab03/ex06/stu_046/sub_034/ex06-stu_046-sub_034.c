#include <stdio.h>

int main()
{
    char c;
    int s = 0;

    while((c = getchar()) != EOF)
        s += (c - '0');
    
    if(s % 9 == 0)
        printf("yes");
    else
        printf("no");
    
    return 0;
}