
#include <stdio.h>

int main(){
    int num1, num2, num3;
    int num;
    
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1>num2) & (num1>num3)){
        num = num1;
    }
    else if ((num2>num1) & (num2>num3)){
        num = num2;
    }
    else{
        num = num3;
    }
 
    printf("%d\n", num);
}