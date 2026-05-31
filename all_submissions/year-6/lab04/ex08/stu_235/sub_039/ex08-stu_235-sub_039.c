

#include <stdio.h>

int char_int(char c)
{
    return (c - '0');
}

int main ()
{
    char n1[80], n2[80];
    int i = 0;
    scanf("%s %s", n1, n2);

    while(n1[i] != '\0')
    {
        if(n1[i] != n2[i])
        {
            if (char_int(n1[i]) > char_int(n2[i]))
                printf("%s\n", n1);
            else
                printf("%s\n",n2);
            return 0;
        }
        i++;
    }
    return 0;
}