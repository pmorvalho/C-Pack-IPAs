
#include <stdio.h>

int main (){
    int num = 0, div = 1;
    scanf("%d", &num);
    int num2 = num/2;
    for (num2; num2>0; num2--){
        if (num%num2 == 0){
            ++div;
        }
    }
    printf("%d\n", div);
    return 0;
}