
#include <stdio.h>

int main(){
    int n;
    float min, max;
    scanf("%d", &n);
    float numbers[n];

    for (int i = 0; i < n; i++){
        scanf("%f", &numbers[i]);

        if (i == 0) {
            min = numbers[i];
            max = numbers[i];
        }
        else {
            if (numbers[i] <= min){
                min = numbers[i];
            }
            else if (numbers[i] >= max){
                max = numbers[i];
            }
            
        }
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}