#include <stdio.h>

int main()
{
    int num1,num2,num3,menor,meio,maior;
    scanf("%d%d%d",&num1,&num2,&num3);
    
    if (num1 >= num2)
    {
        if (num1 >= num3)
        {
            maior = num1;
            if (num2 >= num3)
            {
                meio = num2;
                menor = num3;
            }
            else
            {
                meio = num3;
                menor = num2;
            }
        
        }  
    }

    if (num2 >= num1)
    {
        if (num2 >= num3)
        {
            maior = num2;
            if (num1 >= num3)
            {
                meio = num1;
                menor = num3;
            }
            else
            {
                meio = num3;
                menor = num1;
            }
        
        }  
    }

    if (num3 >= num1)
    {
        if (num3 >= num2)
        {
            maior = num3;
            if (num1 >= num2)
            {
                meio = num1;
                menor = num2;
            }
            else
            {
                meio = num2;
                menor = num1;
            }
        
        }  
    }
    printf("%d %d %d\n",menor,meio,maior);
    
  return 0;
}