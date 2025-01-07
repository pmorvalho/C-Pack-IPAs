
#include <stdio.h>
#define VECMAX 100
#define ZERO 48
#define NOVE 57

int main(){
    int lim, i, soma, num, max;
    char n, vec[VECMAX], c;
    soma = max = 0;
    scanf("%c", &n);    
    lim = n - '0';

    for (i = 0;(c = getchar()) != EOF && i < lim; i++){
        if (c >= ZERO && c <= NOVE){
            num = c - '0';
            soma += (num);
            vec[i] = c;
            if (num > max){
                max = num;
            }
        }
        else{
            --i;
        }
    }
    vec[i] = '\0';
    while (soma > 0){
        for(i = 0; i < lim; i++){
            num = vec[i] - '0';
            if (num >= max){
                printf("*");
                --soma;
            }
            else{
                printf(" ");
            }
        }
        --max;
        printf("\n");
    }
return 0;
}