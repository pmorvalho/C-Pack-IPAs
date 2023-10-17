
#include<stdio.h>

int main(){

int N, contador;
float a , media, soma ;
printf("Quantos numeros quer inserir?\n" );

scanf("%d", &N) ;
contador =1;
soma = 0;
printf("Digite os numeros\n" );

while ( contador <= N ){

    scanf("%f", &a );

    soma = soma + a ;
    
    contador = contador + 1;
    
}

media = soma / N ;

printf("A media dos numeros inseridos é %.2f\n", media) ;

return 0 ;

}