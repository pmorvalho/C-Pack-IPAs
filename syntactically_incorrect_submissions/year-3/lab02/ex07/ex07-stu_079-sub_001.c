
#include <stdio.h>

int main(){
    int num1_ex7,num_divisores_ex7, contador_ex7 = 0;
    scanf("%d", num1_ex7);
    while (++contador_ex7 <= num1_ex7){
        if (num1_ex7 %  contador_ex7 == 0){
            num_divisores_ex7++;
        }    
    }
    printf("%d",num_divisores_ex7);
    return 0;
}