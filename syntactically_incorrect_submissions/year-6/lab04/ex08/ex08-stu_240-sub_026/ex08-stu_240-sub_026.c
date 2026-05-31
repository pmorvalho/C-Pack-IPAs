
#include <stdio.h>
#define MAX 80

int main(){ 
    long long int num1, num2;
    scanf("%lld %lld", &num1, &num2);
    if (num1 >= num2){
        printf("%lld\n", num1);
    }
    else{
        printf("%lld\n", num2);
    }
}