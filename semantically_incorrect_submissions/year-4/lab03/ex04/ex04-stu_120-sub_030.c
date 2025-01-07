
#include <stdio.h>
#include <stdbool.h>

int main() {
    int digit;
    bool isFirstDigit = true; 
    
    while ((digit = getchar()) != EOF) {
        if (digit >= '0' && digit <= '9') {
            if (isFirstDigit) {
                if (digit != '0') {
                    putchar(digit); 
                }
                isFirstDigit = false; 
            } else {
                putchar(digit); 
            }
        } else {
            putchar(digit); 
            if (digit == '\n' || digit == ' ') {
                isFirstDigit = true; 
            }
        }
    }

    return 0;
}