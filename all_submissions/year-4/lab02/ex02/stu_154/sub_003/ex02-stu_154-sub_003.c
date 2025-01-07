
#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int max = num2;
    int min = num1;
    if (num1 > num2) {
        max = num1;
        min = num2;
    }
    printf("%d\n %d", min, max);




    return 0;

}
