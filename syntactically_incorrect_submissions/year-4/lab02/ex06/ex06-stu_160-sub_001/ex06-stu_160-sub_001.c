
#include <stdio.h>

int main(){
    float first_num;
    float max, min;
    scanf("%f", &first_num);
    max = first_num;
    min = first_num;
    for (int i = 0; i < first_num; i++){
        float cur_num;
        scanf("%f", &cur_num);
        if (cur_num > max){
            max = cur_num;
        }
        if(cur_num < min){
            min = cur_num;

        }
    }
    return printf("min: %.6f, max: %.6f", min, max);
    

}