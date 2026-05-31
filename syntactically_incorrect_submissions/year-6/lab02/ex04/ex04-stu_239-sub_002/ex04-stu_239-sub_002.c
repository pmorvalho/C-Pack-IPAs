

#include <stdio.h>

int main(){
    int num1, num2, num3, save;

    scanf("%d %d %d", &num1, &num2, &num3);

    int list[3] = {num1, num2, num3};

    for (int i = 0; i < 2; i++){
        if (list[i+1] < list[i]){
            save = list[i];
            list[i] = list[i+1];
            list[i+1] = save;
        }
    }
    for (int i = 0; i < 2; i++){
        if (list[i+1] < list[i]){
            save = list[i];
            list[i] = list[i+1];
            list[i+1] = save;
        }
    }

    printf("%d %d %d\n", list[0], list[1], list[2]);

    return 0;
}