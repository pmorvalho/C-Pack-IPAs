
#include<stdio.h>

int N, M;



int main () {
    printf("Introduza o primeiro número: ");
    scanf("%d", &N);        

    printf("Introduza o segundo número: ");
    scanf("%d", &M);

   if (N  %  M  == 0) {
        printf("yes\n");
    } 
    else {
         printf("no\n");
    }

    return 0;                                        
}
