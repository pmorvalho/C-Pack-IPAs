
#include <stdio.h>

int main(){
    int num1_ex1, num2_ex1, num3_ex1 = 0;   
    scanf("%d%d%d",&num1_ex1,&num2_ex1,&num3_ex1);
    if (num1_ex1 > num2_ex1){
        if (num1_ex1 > num3_ex1){
            printf("%d\n", num1_ex1);
        }
        else{
            printf("O maior numero e: %d", num3_ex1);
        }
    }
    else if (num2_ex1 > num1_ex1){
        if (num2_ex1 > num3_ex1){
            printf("%d\n", num2_ex1);
        }
        else{
            printf("%d\n", num3_ex1);
        }
    }
    return 0;
}
