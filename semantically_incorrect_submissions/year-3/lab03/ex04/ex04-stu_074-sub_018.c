
#include <stdio.h>
#include <stdbool.h>
 

int main() {
    int digit;
    bool is_number = false, is_z = false;

    do {
        digit = getchar();

        if (is_z && (digit == ' ' || digit == '\n')) {
            printf("0%c", digit);
            is_z = false;
        }
        else if (is_z && digit == '\0')     
            printf("0");
        else if (digit != ' ') { 
            if (digit == '0' && !is_number) {
                is_z = true;
            }
            else {
                printf("%c", digit);
                is_z = false;
                is_number = true;
            }
        }
        else {
            printf("%c", digit);    
            is_z = false;
            is_number = false;
        }

    } while(digit != EOF);
    
    return 0;
}