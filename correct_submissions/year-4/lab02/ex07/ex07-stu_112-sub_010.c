
# include <stdio.h>

int main()
{
    int contador1= 1; 
    int contador2 = 0;
    int num;

    scanf("%d", &num);

    while (contador1 <= num)
    {
        if (num % contador1 == 0)
        {
            contador2++;
            contador1++;
            
        }
        else
        {
            contador1++;
        }
        
    }
    printf("%d\n", contador2);
    return 0;
}