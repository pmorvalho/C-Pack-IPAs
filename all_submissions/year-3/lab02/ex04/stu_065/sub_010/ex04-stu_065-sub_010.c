

#include <stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d\n%d\n%d", &num1, &num2, &num3);
    if (num1 <= num2 && num1<=num3){
        if (num2<=num3){
            printf("%d %d %d", num1, num2, num3);
            return 0;
        }
        else{
            printf("%d %d %d", num1, num3, num2);   
            return 0;
        }
    }

    else if (num2 <= num3 && num2 <= num1){
        if (num1<=num3){
            printf("%d %d %d", num2, num1, num3);
            return 0;
        }
        else{
            printf("%d %d %d", num2, num3, num1);
            return 0;
        }
    }
    else{
        if(num2<=num1){
            printf("%d %d %d", num3, num2, num1);
            return 0;
        }
        else{
            printf("%d %d %d", num3, num1, num2);
            return 0;
        }
    }
}