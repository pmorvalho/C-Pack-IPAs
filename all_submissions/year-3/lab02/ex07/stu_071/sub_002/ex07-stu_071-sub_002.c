
#include<stdio.h>

int main (){

int a, b, contador ;

contador = 1;
b = 0 ;

printf("Insira o numero pff\n");

scanf("%d", &a) ;

while ( contador <= a){

    if ( a % contador == 0 ){
       
        b = b +1 ;


    }

    contador = contador + 1 ;

}

printf ( "o numero de divisores de %d é %d\n " , a , b );

return 0;
}