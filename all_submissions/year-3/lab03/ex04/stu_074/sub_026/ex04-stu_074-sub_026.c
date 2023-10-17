
#include <stdio.h>
#include <stdbool.h>
 

int main() {
    int digit = getchar(), num = 0;

    while(digit != EOF) {   

        while (digit != ' ' && digit != '\n') {
            num *= 10;
            num += digit - '0';     
            digit = getchar();
        }
        printf("%d%c", num, digit);

        num = 0;
        digit = getchar();
    }
    
    return 0;
}