

#include <stdio.h>
#define YES 1
#define NO 2

int main ()
{
    char palavra[80];
    int i, final = YES, cont = 0;
    scanf("%s", palavra);
    
    for(i = 0; palavra[i] != '\0'; i++)
        cont++;
    
    if (cont % 2 != 0)
    {
        for(i = 0; i < cont/2; i++)
            if (palavra[i] != palavra[cont - i - 1])
                final = NO;
    }
    else
        for(i = 0; i < (cont/2) - 1; i++)
            if (palavra[i] != palavra[cont - i - 1])
                final = NO;
    
    if (final == YES)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}