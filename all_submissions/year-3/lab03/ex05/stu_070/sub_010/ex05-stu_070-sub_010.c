
#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main()
{
    char c;
    int palavra, especial;
    
    while ((c = getchar()) != EOF){
        if (c == '"'){
            if (especial == TRUE){
                putchar('"');
                especial = FALSE;
            }
            else{
                if (palavra == TRUE){
                    palavra = FALSE;
                    printf("\n");
                }
                else
                    palavra = TRUE;
            }
        }
        else if (c == '\\'){
            if (especial == TRUE){
                putchar('\\');
                especial = FALSE;
            }
            else
                especial = TRUE;
        }
        else{
            if (palavra == TRUE)
                putchar(c);
        }
        
    }
    return 0;
}