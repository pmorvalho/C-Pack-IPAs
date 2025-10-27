
#include <stdio.h>

int main()
{
    int cont, numIn, numMaior; 

    scanf("%d", &numIn);
    numMaior = numIn;

    for (cont = 0; cont < 2 ; cont++) 
    {   
        scanf("%d", &numIn);

        if (numIn > numMaior)
        {
            numMaior = numIn;
        }


    }

    printf("%d\n", numMaior);
    return 0;
}