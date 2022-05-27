#include <stdio.h>

int main()
{
    int s = 0;
    char c;
   
    while((c = getchar()) != EOF)
        s += (c - '0');
   
    printf(s % 9 == 0 ? "yes\n" : "no\n");
   
    return 0;
}