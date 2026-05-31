

#include <stdio.h>
#include <string.h>
#define MAX 100

void leLinha (char s[])
{
    int i, c;

    for (i = 0; (c = getchar()) != ' ' && c != '\n' && c != EOF; i++)
        s[i] = c;

    s[i] = '\0';
    return;
}


void printLinha (char s[], int len)
{
    int i;

    for (i = 0; i < len; i++)
        putchar(s[i]);

    putchar('\n');
    return;
}


int main ()
{
    int i, len1, len2, len_m;
    char nr_1[MAX], nr_2[MAX], maior[MAX];

    leLinha(nr_1);
    leLinha(nr_2);

    len1 = strlen(nr_1);
    len2 = strlen(nr_2);

    if (len1 > len2)
        strcpy(maior, nr_1);

    else if (len2 > len1)
        strcpy(maior, nr_2);

    else
    {
        strcpy(maior, nr_2);
        for (i = 0; i < len1; i++)
        {
            if (nr_1[i] > nr_2[i])
            {
                strcpy(maior, nr_1);
                break;
            }
        }
    }

    len_m = strlen(maior);
    printLinha(maior, len_m);

    return 0;
}