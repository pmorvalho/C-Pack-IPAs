
#include <stdio.h>

#define MAX 100

int main() {
    char num1[MAX], num2[MAX];
    int i;
    int encontrou = 0;

    scanf("%s %s", num1, num2);

    for (i = 0; num1[i] != '\0'; i++) {
        if (num1[i] > num2[i]) {
            printf("%s\n", num1);
            encontrou = 1;
            break;
        }
        else if (num1[i] < num2[i]) {
            printf("%s\n", num2);
            encontrou = 1;
            break;
        }
    }

    if (encontrou == 0) {
        printf("%s\n", num1);
    }
    
    return 0;
}