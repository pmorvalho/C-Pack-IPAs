
#include <stdio.h>
#include <stdbool.h>


int main() {
    int digit = getchar();
    bool its_in_a_number = false, its_zero = false;
    while(1) {
        if (digit == '0')
            its_zero = true;
        if (digit != ' ' && digit != '0')
            its_in_a_number = true;

        
        if (digit == '0' && its_in_a_number)
            printf("0");
        if (digit != '0' && digit != ' ') {
            printf("%c", digit);
            its_zero = false;
        }
        if (digit == ' ') {
            if (its_zero)
                printf("0 ");
            else {
                printf(" ");
                its_in_a_number = false;
            }
        }
        
        if (digit == '\n')
            break;
        digit = getchar();
    }
    printf("\n");
    return 0;
}