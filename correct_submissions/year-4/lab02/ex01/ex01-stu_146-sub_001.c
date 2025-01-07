


#include <stdio.h>

int main() {

    int num1,num2,num3,maior;
    
    scanf("%d%d%d\n",&num1,&num2,&num3);

    maior = num1 > num2 ? num1 : num2; 
    maior = num3 > maior ? num3 : maior;

    printf("%d\n", maior);
    return 0;
    
}