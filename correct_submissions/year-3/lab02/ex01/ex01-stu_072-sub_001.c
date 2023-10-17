

#include <stdio.h>

int main()
{
    int int1, iMax, contador;

    contador = 1;
    iMax= 0;
    
    while (contador++ <= 3)
    {   
        scanf("%d", &int1);
        if (int1 >= iMax)
        {
            iMax = int1;
        }  
    }
    printf("%d\n", iMax);
    return 0;
}