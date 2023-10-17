
#include<stdio.h>

int main(){

int N, contador;
float a , min , max;
printf("Quantos numeros quer inserir?\n" );

scanf("%d", &N) ;
max = -9999 ;    
min = 9999 ;


printf("Digite os numeros\n" );
for (contador = 1 ; contador <= N ; contador++){

    

    scanf ("%f" , &a );

    if ( a > max){

        max = a ;

    }

    else if ( a < min ){

        min = a;
    }

}

printf("min: %f, max: %f\n", min, max);

return 0;




}