#include <stdio.h>

#define DIM 100


int main(){
    int c, i, j = 0, num1[DIM], num2[DIM];
    printf("Insira um inteiro\n");
    for(i = 0; (c = getchar()) >= '0' && c <= '9'; i++)
        num1[i] = c;
    printf("Insira outro inteiro\n");
    for(i = 0; (c = getchar()) >= '0' && c <= '9'; i++)
        num2[i] = c;
    while(num1[j] == num2[j])
        j++;
    if(num1[j] > num2[j])
        for(j = 0; j < i; j++)
            printf("%d", (num1[j] - '0'));
    else
        for(j = 0; j < i; j++)
            printf("%d", (num2[j] - '0'));
    
    return 0;
}