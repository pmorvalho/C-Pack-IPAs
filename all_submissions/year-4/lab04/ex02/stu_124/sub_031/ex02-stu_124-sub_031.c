
#include <stdio.h>
#define VECMAX 100
#define ZERO 48
#define NOVE 57

int main(){
    int lim, i, soma, num;
    char n, vec[VECMAX], c;
    soma = 0;
    scanf("%c", &n);    
    lim = n - '0';

    for (i = 0;(c = getchar()) != EOF && i < lim; i++){
        if (c >= ZERO && c <= NOVE){
            soma += (c - '0');
            vec[i] = c;
        }
        else{
            --i;
        }
    }
    vec[i] = '\0';
    while (soma > 0){
        for(i = 0; i < lim; i++){
            num = vec[i] - '0';
            if (num > 0){
                printf("*");
                --vec[i];
                --soma;
            }
            else if(num == 0){
                printf(" ");
            }
        }
        printf("\n");
    }
return 0;
}