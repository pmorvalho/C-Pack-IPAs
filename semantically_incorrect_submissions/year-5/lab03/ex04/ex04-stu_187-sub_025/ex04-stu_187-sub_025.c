

#include <stdio.h>

int main() {
    int c;
    int leading_zero = 1; 
    int has_digit = 0;    

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            if (leading_zero && c == '0') {
                
            } else {
                putchar(c);
                leading_zero = 0; 
                has_digit = 1;
            }
        } 
        else {
            if (has_digit == 0 && leading_zero == 1) {
                
                putchar('0');
            }
            putchar(c); 
            leading_zero = 1; 
            has_digit = 0;
        }
    }

    return 0;
}