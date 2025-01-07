
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int n;
    float min, max, num;
    
    scanf("%d", &n);
    scanf("%f", &num);
    min = num;
    max = num;
    for(int i = 1; i < n; i++){
        scanf("%f", &num);
        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}