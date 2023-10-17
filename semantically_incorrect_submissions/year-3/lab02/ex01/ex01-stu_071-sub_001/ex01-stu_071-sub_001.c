
#include<stdio.h>

int main (){

int a, b, c;

printf("Insira os 3 numeros pff\n");

scanf("%d%d%d", &a, &b, &c);

if (a>b && a>c){

    printf("O maior numero inserido é %d \n", a );
}

else if (b>a && b>c){

    printf("O maior numero inserido é%d \n", b );

}

else {

printf("O maior numero inserido é %d \n", c );

}

return 0;
}