
#include <stdio.h>
int main()
{
    #define DIM 4
    char s[DIM];
    int c,i = 0,j=0;
    while (i < DIM-1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    for (i = i - 1; i > 0; i--)
    {
        if (s[i] != s[j]){
            printf("no\n");
            return 0;}
        j++;
    }
    printf("yes\n");
    return 0;
}