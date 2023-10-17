
#include <stdio.h>

int main (){

int M, N ;

printf("Insira dois numeros por favor\n") ;

scanf("%d%d" , &M, &N) ;

if (M > N)
{
    printf("O numero maior é o %d \n O numero menor é o %d" , M , N);

}

else 
{
 printf("O numero maior é o %d \nO numero menor é o %d\n" , N , M);

}

return 0 ;
}