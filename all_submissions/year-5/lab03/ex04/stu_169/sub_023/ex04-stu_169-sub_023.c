



#include <stdio.h>
#define SEQ 100

int main() {
    char seq[SEQ], c;
    int i = 0, zero_inicial = 1, numero_impresso = 0;

    
    while (i < SEQ - 1 && (c = getchar()) != EOF) 
        seq[i++] = c;
    
    seq[i] = '\0';  

    
    for (i = 0; seq[i] != '\0'; i++) {
        if (zero_inicial && seq[i] == '0') {
            
            if (seq[i + 1] == ' ' || seq[i + 1] == '\n' || seq[i + 1] == '\0') {
                putchar('0');
                zero_inicial = 0; 
                numero_impresso = 1;
            }
        }
        else if (seq[i] >= '1' && seq[i] <= '9') {
            putchar(seq[i]);
            zero_inicial = 0;  
            numero_impresso = 1;
        }
        else if (seq[i] == '0' && !zero_inicial) {
            putchar(seq[i]);  
        }
        else if (seq[i] == ' ' || seq[i] == '\n') {
            if (numero_impresso) {  
                putchar(seq[i]);
                zero_inicial = 1;  
                numero_impresso = 0;  
            }
        }
    }

    return 0;
}
