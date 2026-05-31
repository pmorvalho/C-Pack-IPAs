

#include <stdio.h>
#include <string.h>
#define MAX 100

int main ()
{
    int i, len1, len2;
    char nr_1[MAX], nr_2[MAX], maior[MAX];

    scanf("%s%s", nr_1, nr_2);

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

    puts(maior);

    return 0;
}