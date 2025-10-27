

#include <stdio.h> 

int main() {
    char c;
    int ativo = -1, back = -1;

    while ((c = getchar()) != '\n') {
        if ((c == '"'))  {
            ativo = ativo * (-1);
        }
        if ((c == '"') && (ativo == -1)) {
            printf("\n");
        }

        if ((back == '\\'))
            back = back * -1;

        if ((ativo == 1) && (c == '"') && (back == -1))  {
            continue;
        } 
    
        if (ativo == 1)  {
            putchar(c);
        } 
        back = back * -1;
    }

}


