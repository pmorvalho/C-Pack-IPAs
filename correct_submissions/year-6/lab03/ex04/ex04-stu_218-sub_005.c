
#include <stdio.h>


#define FORA 0       
#define ZEROS 1      
#define NUMERO 2     

int main()
{
    int c;
    int estado = FORA;

    while ((c = getchar()) != EOF)
    {
        if (c >= '1' && c <= '9')
        {
            estado = NUMERO;
            putchar(c); 
        }
        else if (c == '0')
        {
            if (estado == FORA) {
                estado = ZEROS; 
            } else if (estado == ZEROS) {
                
            } else if (estado == NUMERO) {
                putchar(c); 
            }
        }
        else
        {
            
            
            
            
            if (estado == ZEROS)
            {
                putchar('0');
            }
            
            
            putchar(c);
            
            
            estado = FORA;
        }
    }

    
    if (estado == ZEROS)
    {
        putchar('0');
    }

    return 0;
}