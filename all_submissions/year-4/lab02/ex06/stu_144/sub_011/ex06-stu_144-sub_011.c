
#include <stdio.h>

int main(){

    int N;
    int counter = 1;
    float real;

    scanf("%d", &N);
    scanf("%f", &real);

    float min = real;
    float max = real;

    while(counter < N){
        scanf("%f", &real);
        if(real < min){
            min = real;
        }else if(real > max){
            max = real;
        }
        counter++;
    }
    return 0;
}