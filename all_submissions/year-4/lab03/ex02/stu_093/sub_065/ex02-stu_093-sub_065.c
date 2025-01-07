

#include <stdio.h>

void secondSide(int i){

    printf("\b");
    for(int k = i - 1; k > 0; k--){
        printf(" %d", k);
    }

    printf("\n");
}

void firstSide(int num, int i){
    for(int j = i; j < num; j++){
        printf("  ");
    }

    for(int k = 1; k <= i; k++){
        printf("%d ", k);
    }

    secondSide(i);
}

int main(){

    int num;
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){
        firstSide(num, i);
    }

    return 0;
}