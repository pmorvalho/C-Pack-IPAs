
#include <stdio.h>

int num1, num2, num3, num_maior, num_med, num_peq;

int main() { 
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 >= num2) {
        if (num1 >= num3){
            num_maior = num1;
            if(num2 >= num3) {
                num_med = num2;
                num_peq = num3;
            }
        
            else {
                num_med = num3;
                num_peq = num2;
            }   
        }
    }
    else if (num2 > num1) {
        if (num2 >= num3){
            num_maior = num2;
            if(num1 >= num3) {
                num_med = num1;
                num_peq = num3;
            }
        
            else {
                num_med = num3;
                num_peq = num1;
            } 
        }
    }
    else {
        num_maior = num3;
        if(num1 >= num2) {
            num_med = num1;
            num_peq = num2;
        }
        
        else {
            num_med = num2;
            num_peq = num1;
        }   
    }

    printf("%d %d %d\n", num_peq, num_med, num_maior);
    return 0;
}