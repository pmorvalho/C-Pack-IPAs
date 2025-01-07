
#include <stdio.h>

int main() {
    
    double A;
    double B;
    double C;
    double D;
    double min;
    double max;

    
    printf("Introduza os valores de A B C e D \n");
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    
    if (A>B && A>C && A>D) {

        max = A;
    }
    else if (B>A && B>C && B>D) {

        max = B;
    }
    else if (C>A && C>B && C>D) {

        max = C;

    }
    else {
       max = D; 
    }

    printf("Max: "); printf("%lf", max);

    
    if (A<B && A<C && A<D) {

        min = A;
    }
    else if (B<A && B<C && B<D) {

        min = B;
    }
    else if (C<A && C<B && C<D) {

        min = C;

    }
    else {
       min = D; 
    }

    printf("\nMin: "); printf("%lf \n\n", min);



    

    return 0;
}