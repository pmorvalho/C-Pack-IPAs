

#include <stdio.h>

int main(void) {

    int num, i, numdiv;
    scanf("%d", &num);
    numdiv = 0;

    i = 1;
    while (i <= num){
        if (num % i == 0)
            numdiv++;
        i++;
    }
    printf("%d", numdiv);    
    return 0;
}