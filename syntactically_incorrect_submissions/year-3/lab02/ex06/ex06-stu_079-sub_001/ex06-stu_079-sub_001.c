
#include <stdio.h>

int main(){
    float num_corrente_ex6, max_ex6, min_ex6 = 0.0;
    int num_nums_ex6 = 1;
    scanf("%d", &num_nums_ex6);
    scanf("%f", &num_corrente_ex6);
    max_ex6 = max_ex6 = num_corrente_ex6;
    while (--num_nums_ex6){
        scanf("%f", &num_corrente_ex6);
        if (num_corrente_ex6 < min_ex6){
            min_ex6 = num_corrente_ex6;
        }
        else if (num_corrente_ex6 > max_ex6){
            max_ex6 = num_corrente_ex6;
        }
    printf("min: %d  max: %d", min_ex6,max_ex6);
    }
    return 0;
}