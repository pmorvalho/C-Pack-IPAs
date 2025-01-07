

#include <stdio.h>
#include <string.h>

void removeZeros(char *str)
{
    int len = strlen(str);
    int i, j = 0;

    for (i = 0; i < len; i++)
    {
        if (str[i] == '0' && (i == 0 || (i > 0 && str[i - 1] != '0')))
        {
            str[j++] = str[i];
        }
        else if (str[i] != '0')
        {
            str[j++] = str[i];
        }
    }

    
    str[j] = '\0';
}

int main()
{
    char input[100]; 

    
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        return 1; 
    }

    
    removeZeros(input);

    
    printf("%s\n", input);
}
