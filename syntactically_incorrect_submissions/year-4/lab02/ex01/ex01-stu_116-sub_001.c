
#include <stdio.h>

int main()
{
    int num1, num2, num3, m;

    scanf("%d %d %d", &num1, &num2, &num3);
    m = num1 > num2 ? num1 : num2; 
    m = num3 > m ? num3 : m;
    printf("%d\n", m);

    return 0;
}
























// }