
# include <stdio.h>

int main()
{
    int valor1, valor2, valor3 ;
    scanf("%d %d %d",&valor1, &valor2, &valor3);
    return printf("%d\n", valor1>valor2 ? (valor1 > valor3? valor1 : valor2 > valor3? valor2 : valor3): valor2) == EOF;
 
    
}