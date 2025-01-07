
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N, num_digits = 0, sum = 0, temp = 0;
    scanf("%d", &N);
    temp = N;
    while (temp != 0){
        num_digits++;
        temp /= 10;
    }
    temp = N;

    while (temp != 0){
        sum += temp % 10;
        temp /= 10;
    }
    printf("%d\n", num_digits);
    printf("%d\n", sum);

    return 0;
}