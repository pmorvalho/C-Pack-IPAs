
#include <stdio.h>

int main(void){

    int n, count,digit,sum;

    scanf("%d",&n);
    while( n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
        count++;
    }

    printf("%d\n%d\n",count,sum);
    

    return 0;
}