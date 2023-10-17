
#include<stdio.h>

int main(){

int a, contador;
printf("Insira um numero positivo por favor\n") ;  

scanf ("%d", &a );
printf("\n\n");
contador = 1 ;
while (contador <= a){

    printf("%d\n", contador );
    contador = contador +1;

}

    return 0 ;
}


