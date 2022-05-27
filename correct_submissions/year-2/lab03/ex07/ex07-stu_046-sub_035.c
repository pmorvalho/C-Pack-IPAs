#include <stdio.h>

#define MENOS 0
#define MAIS 1

int main()
{
    char c;
    int atual = 0, total = 0;
    int estado = MAIS;

    while((c = getchar()) != '\n')
    {
        if(0 <= c - '0' && c - '0' <= 9)
            atual = atual * 10 + c - '0';
        
        else if(c == ' ')
        {
            if(estado == MAIS)
                total += atual;
            else if(estado == MENOS)
                total -= atual;
            
            if((c = getchar()) == '+')
                estado = MAIS;
            else if(c == '-')
                estado = MENOS;
            
            c = getchar();
            atual = 0;
        }
    }

    if(estado == MAIS)
        total += atual;
    else if(estado == MENOS)
        total -= atual;
    
    printf("%d\n", total);
    
    return 0;
}