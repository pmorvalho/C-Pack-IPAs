
#include <stdio.h>

int main()
{
    char n;

    while(1)
    {
        n = getchar();
        
        if (n == EOF)
        {
            return 0;
        } 
        else if ( n == '0')
        {
            continue;
        } 
        else
        {
            printf("%c ", n);
        }      
    }
    return 0;
}