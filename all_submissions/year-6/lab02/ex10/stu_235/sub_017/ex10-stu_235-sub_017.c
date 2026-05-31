

#include <stdio.h>
#define ESCALA 10

int main ()
{
    int num, dig, s, num2;
    dig = 0;

    scanf("%d", &num);

    for(num2 = num; num2>0; num2 /= ESCALA)
    {
        if (num2 == num)
            s = num2 % ESCALA;
        else
            s += num2 % ESCALA;
        dig++;
    }

    printf("%d\n%d\n",dig , s);
    return 0; 

}