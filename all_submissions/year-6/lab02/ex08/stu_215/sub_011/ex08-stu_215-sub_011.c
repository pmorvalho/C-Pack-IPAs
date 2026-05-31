

#include <stdio.h>
int main(){
    int num;
    float soma = 0, acum;
    scanf("%d", &num);
    int total = num;
    while(num>0){
        num -=1;
        scanf("%f", &acum);
        soma += acum;
    }
    printf("%.2f\n", soma/total);
    return 0;
}