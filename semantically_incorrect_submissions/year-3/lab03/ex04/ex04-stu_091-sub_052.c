
#include <stdio.h>

#define MAX 100

int main()
{
    int c, num, i,total = 0;
    char s[MAX];
    c = getchar();
    for (i = 0; i < MAX-1 && c != EOF; i++)
        {
            s[i] = c;
            c = getchar();
        }
    s[i] = '\0';
    for (i = 0; i < MAX-1 && s[i] != EOF; i++)
    {
        while (s[i] != 0)
        {
            num = s[i] % 10;
            s[i] /= 10;
            if (s[i] == 0 && num == 0)
            {
                total = 0;
            }
            else
            {
                total += (num*10);
            }
        }
        printf("%d",total);
    }
    return 0;
}