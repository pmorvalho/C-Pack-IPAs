
#include <stdio.h>

int main(){
    int num1_ex4, num2_ex4, num3_ex4 = 0;
    scanf("%d%d%d",&num1_ex4,&num2_ex4,&num3_ex4);
    if (num1_ex4 > num2_ex4){
        if (num2_ex4 > num3_ex4){
            printf("%d\t%d\t%d", num1_ex4, num2_ex4, num3_ex4);
            }
        else if (num3_ex4 > num1_ex4){
            printf("%d\t%d\t%d", num3_ex4, num1_ex4, num2_ex4);
        }
        else{
            printf("%d\t%d\t%d", num1_ex4, num3_ex4, num2_ex4);
        }
        }
    else{
        if (num1_ex4 > num3_ex4){
            printf("%d\t%d\t%d", num2_ex4, num1_ex4, num3_ex4);
        }
        else if(num3_ex4 > num2_ex4){
            printf("%d\t%d\t%d", num3_ex4, num2_ex4, num1_ex4);
        }
        else{
            printf("%d\t%d\t%d", num2_ex4, num3_ex4, num1_ex4);
        }
    }
    return 0;
}