#include <stdio.h>


int main(){

    int N;
    int digitos=0;
    int soma=0;


    scanf("%d", &N);

    while(N > 0){

        soma=soma + (N%10);

        N = (N/10);

        digitos++;

    }

    printf("%d\n%d\n", digitos, soma);


return 0;
}
