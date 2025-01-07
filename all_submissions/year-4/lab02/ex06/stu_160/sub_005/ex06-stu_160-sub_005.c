
#include <stdio.h>

int main(){
    float first_num;
    float max, min, setter;
    scanf("%f", &first_num);
    scanf("%f", &setter);
    min = setter;
    max = setter;
    for (int i = 0; i < first_num-1; i++){
        float cur_num;
        scanf("%f", &cur_num);
        if (cur_num > max){
            max = cur_num;
        }
        if(cur_num < min){
            min = cur_num;

        }
    }
    printf("min: %.6f, max: %.6f", min, max);
    return 0;

}