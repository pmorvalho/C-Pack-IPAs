
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int i = 1;
    while(i <= num) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}