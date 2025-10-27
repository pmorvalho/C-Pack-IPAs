
#include <stdio.h>

int main(){
    int num, num_dig, soma;
    scanf("%d", &num);
    while(num != 0){
        soma += (num%10);
        num_dig++;
        num /= 10; 
    }
    printf("%d\n%d\n", num_dig, soma);
    return 0;
}