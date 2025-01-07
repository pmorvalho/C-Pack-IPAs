

#include <stdio.h>

#define DIM 100

int converteEmInt(int n){
    return ( n - 30);
}

int verificaNove( int n ){
    return ((n % 9) == 0);
}

int main(){
    int c, amount = 0;


    for(int i = 0; (c = getchar()) != '\n' || i > 99 ;i++){
        amount += converteEmInt(c);
    }
    printf("%s\n", verificaNove(amount) ? "yes" : "no");

}