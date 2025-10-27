
#include <stdio.h>
#include <values.h>

int main()
{
    
    int N;
    float max = FLT_MAX, min = -FLT_MAX, valores;

    
    scanf("%d", &N);
    
    
    while( N--)
    {
        scanf("%f", &valores);

        if(valores > max)
            max = valores;
        
        else if( valores < min)
            min = valores;

    }

    printf("min:%f max:%f", min, max);  


    return 0;
}