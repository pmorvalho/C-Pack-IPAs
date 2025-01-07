#include <stdio.h>


int parseInt(const char *str)
{
    int result = 0;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int main()
{
    char input[100]; 
    int num, result;

    
    fgets(input, sizeof(input), stdin);

    
    const char *currentInput = input;

    
    result = parseInt(currentInput);

    
    while (sscanf(currentInput, "%d", &num) == 1)
    {
        char op;
        sscanf(currentInput, "%d %c", &num, &op);
        currentInput += (op == '+' || op == '-') ? 3 : 0; 

        
        if (op == '+')
        {
            result += num;
        }
        else if (op == '-')
        {
            result -= num;
        }
    }

    
    printf("%d\n", result);

    return 0;
}
