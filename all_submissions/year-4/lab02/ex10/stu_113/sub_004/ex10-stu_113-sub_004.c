
#include <stdio.h>

int main()
{
    int num, dig = 0, sum = 0;
    scanf("%d", &num);
    while (num > 0) {dig += 1; sum += num % 10; num = num / 10;}
    printf("%d\n%d\n", dig, sum);
    return 0;
}
