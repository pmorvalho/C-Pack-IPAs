#include <stdio.h>

int main()
{
    char c, previous_char;
    int state = 0;
    c = getchar();
    while (c != EOF)
    {
        
        if (c == '\n' || c == ' ') {
            if (state == 0 && previous_char == '0') {
                putchar('0');
            }
            state = 0;
        }
        else if (c != '0') {
            state = 1;
            putchar(c);
        }
        else if (c == '0' && state == 1){
            putchar(c);
        }
        previous_char = c;
        c = getchar();
    }
    return 0;
}