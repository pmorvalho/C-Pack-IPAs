
#include<stdio.h>

int main(){
    int num, aux, count = 0, sum = 0;

    scanf("%d", &num);

    aux = num;

    while(aux != 0){
        sum = sum + (aux % 10);
        aux /= 10;
        count++;
    }

    
    printf("%d\n%d\n", count, sum);

    return 0;
}
