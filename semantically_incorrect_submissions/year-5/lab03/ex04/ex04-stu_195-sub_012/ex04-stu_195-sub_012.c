


#include <stdio.h>

int main() {
    int ch;
    int leading_zero = 1; 
    int has_digit = 0;    
    int first_digit = 1;  

    while ((ch = getchar()) != EOF) {
        if (ch >= '0' && ch <= '9') {
            if (ch != '0' || !leading_zero) {
                putchar(ch);
                leading_zero = 0;
                has_digit = 1;
            }
        }
        else {
            if (has_digit == 0 && first_digit == 0) {
                putchar('0'); 
            }
            putchar(ch);
            leading_zero = 1;
            has_digit = 0;
            first_digit = 0;
        }
    }
    return 0;
}