
#include <stdio.h>
#define MAX 80







int main()
{
    char str[MAX];
    char c;
    int index = 0;
    while ((c = getchar()) != EOF && c != '\n')
    {
        str[index++] = c;
    }
    printf("%s\n", str);
    return 0;
}