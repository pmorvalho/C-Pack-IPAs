
#include <stdio.h>

#define NAO 0
#define SIM 1

int main (){
    int n, rep, state = 0;
    float num, min, max = 0;
    scanf("%d", &n);
    for(rep = 1; rep <= n; rep++){
        scanf("%f", &num);
        if (state == NAO){
            min = num;
            max = num;
            state = SIM;
        }
        else if (num < min){
            min = num;
        }
        else if (num > max){
            max = num;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}