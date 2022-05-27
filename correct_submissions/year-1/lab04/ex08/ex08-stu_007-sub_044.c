#include <stdio.h>

#define MAX 100
#define TRUE 1
#define FALSE 0

int leLinha(char s[], int size);
int maior(char s1[], char s2[]);

int main()
{   
    int size;
    char s1[MAX], s2[MAX];

    size = leLinha(s1, MAX);
    leLinha(s2, size + 1); 

    maior(s1, s2);

    return 0;
}


int leLinha(char s[], int size)
{
    int counter, c;

    counter = 0;
    while (counter < (size - 1) && ((c = getchar()) != EOF) && (c != '\n') && (c != ' '))
    {
        s[counter] = c;
        ++counter;
    }
    s[counter] = '\0';

    return counter;
}

int maior(char s1[], char s2[])
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if ((s1[i] - '0') > (s2[i] - '0'))
        {
            printf("%s\n", s1);
            return 0;
        }
        else if ((s1[i] - '0') < (s2[i] - '0'))
        {
            printf("%s\n", s2);
            return 0;
        }
        ++i;
    }

    return 0;
}
