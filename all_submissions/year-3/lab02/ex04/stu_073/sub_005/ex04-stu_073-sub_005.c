


#include <stdio.h>

int main() {
    int A,B,C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A < B && A < C){
        if (B < C)
        printf("%d %d %d\n", A,B,C);
        else
        printf("%d %d %d\n", A,C,B);
    }
 
    else if (B < A && B < C){
        if (A < C)
        printf("%d %d %d\n", B,A,C);
        else
        printf("%d %d %d\n", B,C,A);
    }

    else if (C < A && C < B){
        if (A < B)
        printf("%d %d %d\n", C,A,B);
        else
        printf("%d %d %d\n", C,B,A);
    }

    return 0;

}