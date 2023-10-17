

#include <stdio.h>

#define MAX_DIGITS 100

int main(){

    char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1];
    int i;

    scanf("%s %s", num1, num2);

    for (i = 0; num1[i] != '\0'; i++) {

        if (num1[i] > num2[i]){
            printf("%s\n", num1);
            return 0;
        }
        else if (num2[i] > num1[i]){
            printf("%s\n", num2);
            return 0;
        }
    }
    printf("%s\n", num1);
    return 0;
}
