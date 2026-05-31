
#include<stdio.h>

int a, b, c, maior;



int main () {
   
    scanf("%d %d %d", &a, &b, &c);

    if(a > b) b=a;
    if(b > c) c=b;
    if( a > c) c=a;

    printf("O maior número é: %d\n", c);
    return 0;                                        
}