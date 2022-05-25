# include <stdio.h> 

int main ()
{
    int n, digito, digitos = 0, soma= 0;
    scanf ("%d", &n);

    while (n > 0)
    {
        digito = n % 10; 
        n /= 10;
        soma += digito ;
        ++digitos;
        
    }    

    printf ("%d\n%d\n", digitos, soma);


    return 0;
}