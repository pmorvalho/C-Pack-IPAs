
# include <stdio.h>



void lepalavra(int c)
{
    
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
    return;  
}

int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        lepalavra(c);

    }
    return 0;
}