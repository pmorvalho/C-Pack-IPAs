
#include <stdio.h>

int main ()
{
    int num1;
    int num2;
    scanf("%d%d", &num1, &num2);

    if (num1%num2 ==0)
        printf("yes");
    else
        printf("no");
    return 0;
}
