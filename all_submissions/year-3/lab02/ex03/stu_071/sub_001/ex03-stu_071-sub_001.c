
#include <stdio.h>

int main(){

int a,b ;

printf("Insira dois numeros por favor\n") ;

scanf("%d%d" , &a , &b ) ;

if (a % b ==0  )
{

    printf("%d é divisivel por %d\n" ,a,b ) ;
}

else 
{

    printf("%d não é divisivel por %d\n" , a,b ) ;

}


return 0;



}