#include <stdio.h>

int main()
{
    int sum = 0;
    char c;
   
    while((c = getchar()) != EOF)
        sum += (c - '0');
   
    printf(sum % 9 == 0 ? "yes\n" : "no\n");
   
    return 0;
}