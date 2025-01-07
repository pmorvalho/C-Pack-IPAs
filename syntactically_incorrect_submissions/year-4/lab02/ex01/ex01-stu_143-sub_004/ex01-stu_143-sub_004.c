

#include <stdio.h>

int main(){

    int i, maior, num1, num2, num3;

    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2){
        if (num1 > num3)
            maior = num1;
        else
            maior = num3;
    }
    else{
        if (num2 > num3)
            maior = num2;
        else
            maior = num3;
    }

    print("%d", maior);
    
    return 0;
}
