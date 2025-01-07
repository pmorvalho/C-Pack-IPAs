
# include <stdio.h>

int main()
{
    int val1, val2;
    scanf("%d %d", &val1, &val2);
    if (val1 % val2)
    {
        printf("no\n");
    }
    else
    {
        printf("yes\n");
    }

    return 0;
}