
#include <stdio.h>

int main() {
    int n;
    float min, max, temp;
    scanf("%d", &n);
    min = max = n;
    while(n != 0){
        scanf("%f", &temp);
        if(temp < min){
            min = temp;
        }
        if(temp > max){
            max = temp;
        }
        n--;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}