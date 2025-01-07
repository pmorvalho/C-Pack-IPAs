
#include <stdio.h>
#include <string.h>
#define MAX 100

int main () {
    char num1[MAX], num2[MAX];
    int size, i = 0;
    fgets(num1, MAX, stdin);
    fgets(num2, MAX, stdin);
    size = strlen(num1);
    while (size - (i++) && num1[i] == num2[i])
        ;
    printf("%s", num1[i] > num2[i] ? num1 : num2);
}
