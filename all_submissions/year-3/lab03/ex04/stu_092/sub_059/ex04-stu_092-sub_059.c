
# include <stdio.h>



void lepalavra(int c)
{
    while (c != '\n'){
        while (c == '0'){
            c = getchar();
            if (c == ' ')
                putchar('0');
        }
        while (c != ' '){
            putchar(c);
            c = getchar();
        }
        putchar(c);
        c = getchar();
    }
    return;  
}


int main()
{
    int c;
    c = getchar();
    lepalavra(c);
    putchar('\n');
    return 0;
}