
#include <stdio.h>

int main() {
    int digit;
    int leadingZero = 0;
    int foiZero = 1;

    while ((digit = getchar()) != EOF) 
    {
        if (digit >= '0' && digit <= '9') 
        {
            digit -= '0';

            if (leadingZero == 0 && digit == 0 && foiZero == 1)  
            {  
                foiZero = 0;
                continue;
            }
            else if (digit == 0 && foiZero == 0)
            {
                foiZero = 1;
                printf("%d", digit);
                continue;
            }

            leadingZero = 1; 
            printf("%d", digit);
        } 
        else if (digit == ' ') 
        {
            foiZero = 1;   
            leadingZero = 0;       
            printf(" ");
        }
        else if (digit == '\n') 
        {
            foiZero = 1;   
            leadingZero = 0;       
            printf("\n");
        }
        else 
        {
            foiZero = 1;   
            leadingZero = 0;       
            printf("%c", digit);
        }
    }

    return 0;
}

