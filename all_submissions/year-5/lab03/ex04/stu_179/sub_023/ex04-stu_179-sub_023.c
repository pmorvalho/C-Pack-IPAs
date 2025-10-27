#include <stdio.h>
#include <ctype.h>

int main() {
    int ch;
    int leading_zero = 1; 
    int printed = 0;       

    while ((ch = getchar()) != EOF) {
        if (isdigit(ch)) { 
            if (ch != '0') {
                leading_zero = 0; 
                putchar(ch);
                printed = 1; 
            } else if (!leading_zero) {
                putchar(ch); 
                printed = 1;
            }
        } else { 
            if (printed == 0 && leading_zero) {
                putchar('0'); 
            }
            putchar(ch); 
            leading_zero = 1; 
            printed = 0;      
        }
    }
    return 0;
}
