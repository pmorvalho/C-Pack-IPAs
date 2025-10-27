

#include <stdio.h>

int main(){
    int a, i;
    int b=0;
    int max = 0;
    int min = 0;
    scanf("%d", &a);
    for (i=0; i<a; i++){
        scanf("%d", &b);
        if(b>max)
            max =b;
        if(b<min)
            min = b;
    }
    printf("min: %f, max: %f\n", min, max);
}