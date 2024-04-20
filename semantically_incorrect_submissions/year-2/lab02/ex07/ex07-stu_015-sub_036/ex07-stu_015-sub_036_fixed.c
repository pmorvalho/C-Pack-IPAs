#include <stdio.h>

int N, contador = 1, passo = 1;

int main(){ 

    scanf("%d", &N);
     while (passo <= N / 2){
         if (N % passo == 0)
            contador += 1;
        passo ++;
     }

     printf("%d\n", contador);

     return 0;

}
