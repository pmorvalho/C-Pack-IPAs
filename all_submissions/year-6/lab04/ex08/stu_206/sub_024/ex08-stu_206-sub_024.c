

#include <stdio.h>
#include <string.h>

#define MAX 80

int main() {
    char num1[MAX], num2[MAX];
    if (scanf("%s %s", num1, num2) != 2) return 0;
    if (strcmp(num1, num2) >= 0) {
        printf("%s\n", num1);
    } else {
        printf("%s\n", num2);
    }
    return 0;
}