

#include <stdio.h> 

int main() {
    char c;
    int ativo = -1;
    while ((c = getchar()) != '\n') {
        if ((c == '"'))  {
            ativo = ativo * (-1);
        }
        if ((c == '"') && (ativo == -1)) {
            printf("\n");
        }

        if ((ativo == 1) && (c == '"')) {
            continue;
        } 
    
        if (ativo == 1)  {
            putchar(c);
        } 
        
    }

}


