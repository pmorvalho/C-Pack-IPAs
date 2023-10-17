

#include <stdio.h>

#define MAX 100

int main() {

    int i;
    char num1[MAX+1], num2[MAX+1];

    scanf("%s%s", num1, num2);

    for (i = 0; i < MAX && num1[i] != '\0'; i++) {
        if (num1[i] != num2[i]) {
            if (num1[i] > num2[i]) {
                printf("%s\n", num1);
                break;
            }
            else
                printf("%s\n", num2);
        }
    }

    return 0;
}