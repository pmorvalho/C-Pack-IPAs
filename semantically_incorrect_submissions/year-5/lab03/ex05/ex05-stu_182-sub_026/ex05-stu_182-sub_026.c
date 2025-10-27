
#include <stdio.h>
#define IN 0  
#define OUT 1 

int main() {
    int c;
    int state = OUT;   
    int backslash = OUT;  
    
    while ((c = getchar()) != EOF) {
        if (state == OUT) {
            
            if (c == '"') {
                state = IN;
                
            }
        }
        else if (state == IN) {  
            if (backslash == OUT) {  
                if (c == '\\') {
                   
                    backslash = IN;
                }
                else if (c == '"') {
                    
                    state = OUT;
                    putchar('\n');  
                }
                else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == ' ')) {
                  
                    putchar(c);
                }
            }
            else { 
                
                if (c == '"' || c == '\\') {
                    putchar(c);  
                }
                backslash = OUT;  
            }
        }
    }
    return 0;
}