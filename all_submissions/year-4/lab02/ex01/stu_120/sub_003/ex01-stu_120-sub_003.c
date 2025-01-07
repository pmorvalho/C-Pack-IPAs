
#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("");
    scanf("%d",&num1);
    printf("");
    scanf("%d",&num2);
    printf("");
    scanf("%d",&num3);
    int maior_numero = num1;

    if (num2 > maior_numero){
    maior_numero = num2;
    }
    
    if (num3 > maior_numero){
    maior_numero = num3;
    
    }
    printf("%d\n",maior_numero);

    return 0;
}