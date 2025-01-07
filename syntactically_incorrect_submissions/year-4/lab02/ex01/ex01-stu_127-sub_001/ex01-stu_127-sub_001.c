
#include <stdio.h>
int main()
{
    printf("introduza o valor de X\n");
    
    int X;
    int Y;
    int Z;
    
    scanf("%d", &X);
    
    printf("introduza o valor de Y\n");
    scanf("%d", &Y);
    
    printf("introduza o valor de Z\n");
    scanf("%d", &Z);
    printf("O maior valor entre os 3 e' :\n");
    if (X>Y && X>Z) {
       
        printf("%d", X);
    }
    else if (Y>X && Y>Z) {
        printf("%d", Y);
    }
    else {
        
        printf("%d", Z);
    }

    return 0;
}
