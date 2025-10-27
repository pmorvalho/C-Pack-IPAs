

#include <stdio.h>
#define MENSAGEM 100

int main() {
    char c, seq[MENSAGEM];
    int i = 0, msg = 0, escape_sequence = 0;

    while (i < (MENSAGEM - 1) && (c = getchar()) != EOF)
        seq[i++] = c;

    seq[i] = '\0';

    for (i = 0; seq[i] != '\0'; i++) {
        if (escape_sequence) {
            putchar(seq[i]);
            escape_sequence = 0;
        }

        else if (seq[i] == '\\') 
            escape_sequence = 1;
            
        else if (seq[i] == '"') {
            if (!msg) 
                msg = 1;

            else {
                msg = 0;
                putchar('\n');
            }
        }

        else if (msg)
            putchar(seq[i]);
        
    }

    return 0;
}