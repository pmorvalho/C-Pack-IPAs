#include <stdio.h>

int check_is_num(int c);

int main()
{
    int c, last_char, is_num, first_char;

    last_char = ' ';
    first_char = ' ';
    while ((c = getchar()) != EOF)
    {
        is_num = check_is_num(c);
        if (!check_is_num(last_char) && is_num)
            first_char = c;    


        if ((is_num && c != '0') || (first_char != '0' && c == '0')) 
            putchar(c); 

       else if (first_char == '0' && !is_num && last_char == '0') 
            putchar(last_char);

       if (!is_num && (last_char >= '0' && last_char <= '9'))
            putchar(' ');

        last_char = c;
    }
    printf("\n");
    
    return 0;
}

int check_is_num(int c)
{
    return ((c >= '0') && (c <= '9'));
}
