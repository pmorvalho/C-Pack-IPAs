

#include <stdio.h>

int main(){

    int n;
    float min, max, temp;

    scanf("%d", &n);

    scanf("%f", &temp);

    min = max = temp;

    for(int i = 1; i < n; i++){
        scanf("%f", &temp);

        if(temp < min){
            min = temp;
        }
        if(temp > max){
            max = temp;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;

}
