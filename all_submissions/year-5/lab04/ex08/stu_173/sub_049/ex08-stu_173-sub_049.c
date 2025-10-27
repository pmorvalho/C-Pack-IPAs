

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    char num1[MAX], num2[MAX];

    scanf("%s", num1);
    scanf("%s", num2);

    if (strcmp(num1, num2) > 0)
        printf("%s\n", num1);
    else
        printf("%s\n", num2);
    return 0;
}