
#include <stdio.h>
int main()
{
    int n,i = 0, sum = 0;
    char s[100];
    scanf("%d",&n);
    sprintf(s,"%d",n);

    while (s[i] != '\0' && s[i] != '\n')
    {
        if (s[i] >= '0' && s[i] <= '9')
            sum += s[i] - '0';
        i++;
    }
    if (sum % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}