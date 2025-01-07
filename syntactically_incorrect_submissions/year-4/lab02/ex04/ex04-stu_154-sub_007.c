
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);
    int max, min, med;
    max = num1;
    med = num2;
    min = num3;

    if (max > num2) {
        
    }
    if (max > num3) {

    }
    if (max < num2) {
        max = num2;
        med = num1;
        if (max > num3){

        }
        else(max < num3){
            max = num3;
        }
    }
    if (min > num2 ) {
        min = num2;
        med = num3;
        max = num1;
        if (min > num1) {
            min = num1;
            med = num2;
            max = num3;
        }
    }

    printf("%d %d %d",min, med, max);





    return 0;

}
