

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int res = 0, aux = 0;
    char c;
    bool adding = true;
    while((c = getchar())!= EOF && c != '\0' && c != '\n')
    {
        if (c == '+' || c == '-')
        {
            if (adding) res += aux;
            else res -= aux;

            if(c == '+') adding = true;
            else if (c == '-') adding = false;
            aux = 0;
        }
        else if (c != ' ')
        {
            aux = aux * 10 + (c - '0');
        }
    }
    if (adding) res += aux;
    else res -= aux;
    printf("%d\n", res);
    return 0;
}