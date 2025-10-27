
#include <stdio.h>

int main(){
    int num1,num2,num3, meio=0,menor=0,maior=0;
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1>num2){
        maior=num1;
        if(maior>num3){
            maior=maior;
            if(num2>num3){
                menor=num3;
                meio=num2;
            }
            else{
                menor=num2;
                meio=num3;
            }
        }
    }
    if (num2>num1){
        maior=num2;
        if (maior>num3){
            maior=maior;
            if(num1>num3){
                menor=num3;
                meio=num1;
            }
            else{
                menor=num1;
                meio=num3;
            }
        }
    }
    if (num3>num1){
        maior=num3;
        if (maior>num2){
            maior=maior;
            if(num1>num2){
                menor=num2;
                meio=num1;
            }
            else{
                menor=num1;
                meio=num2;
            }
        }
    }
    printf("%d\t%d\t%d\n", menor,meio,maior);
    return 0;
}