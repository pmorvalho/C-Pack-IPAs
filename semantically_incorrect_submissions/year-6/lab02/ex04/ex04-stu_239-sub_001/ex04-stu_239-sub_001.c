

#include <stdio.h>

int main(){
    int num1, num2, num3;
    int list[3];

    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2){
        if (num2 < num3){
            list[0] = num3;
            list[1] = num2;
            list[2] = num1;
        }
        else {
            list[0] = num2;
            list[1] = num3;
            list[2] = num1;
        }
    }
    else if (num1 < num3){
        list[0] = num3;
        list[1] = num1;
        list[2] = num2;
    }
    else {
        list[0] = num1;
        list[1] = num3;
        list[2] = num2;
    }

    printf("%d %d %d\n", list[2], list[1], list[0]);

    return 0;
}