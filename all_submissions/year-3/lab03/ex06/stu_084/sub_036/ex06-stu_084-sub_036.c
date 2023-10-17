
#include <stdio.h>
#define DIM 100

int main(){
    int i, c, j, sum = 0;
    char num[DIM];

    c = getchar();
    for(i = 0; i < (DIM - 1) && c != EOF; i++){
        num[i] = c;
        c = getchar();
    }
    num[i] = '\0';

    for(j = 0; j <= i; j++){
        sum += (num[j] - '0');
    }
    if ((sum % 9 == 0)){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}
