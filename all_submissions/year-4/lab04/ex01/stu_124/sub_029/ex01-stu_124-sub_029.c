
#include <stdio.h>
#define VECMAX 100
#define ZERO 48
#define NOVE 57


int main(){
    int i, lim, j, num;
    char vec[VECMAX], c, n;
    c = getchar();
    
    
    lim = c - '0';
    for (i = 0; i < lim ; i++){
        n = getchar();
        if (n >= ZERO && n <= NOVE)
            vec[i] = n;
        else
            --i;
    }    
    vec[i] = '\0';

    for (i = 0; i < lim; i++){
        num =vec[i] - '0';
        for (j = 0; j < num; j++){
            printf("*");
        }
        printf("\n");
    }
        

    return 0;
}