
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2, num3;

    scanf("%d %d %d", &num1, &num2, &num3);

    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
   if (num3 > max) {
    max = num3;

   }

    int mid;
    if (num1 != max && num1 != min) {
        mid = num1;
    }
    else if (num2 != max && num2 != min) {
        mid = num2;
    }
    else {
        mid = num3;

    }
    printf("%d %d %d", min, mid, max);

    return 0;

}
