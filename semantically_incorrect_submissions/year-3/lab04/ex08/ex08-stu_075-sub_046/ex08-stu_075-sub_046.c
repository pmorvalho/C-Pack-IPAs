

#include <stdio.h>

#define MAX 100

void printNumber(char number[], int length);

int main() {
    char c, num1[MAX], num2[MAX];
    int i, j;
    for (i = 0; i < MAX && (c = getchar()) != ' '; i++)
        num1[i] = c;
    for (i = 0; i < MAX && (c = getchar()) != EOF; i++)
        num2[i] = c;
    for (j = 0; j < i; j++) {
        if (num1[j] > num2[j]) {
            printNumber(num1, i);
            return 0;
        } else if (num1[j] < num2[j]) {
            printNumber(num2, i);
            return 0;
        }
    }
    printNumber(num1, i);
    return 0;
}

void printNumber(char number[], int length) {
    int i;
    for (i = 0; i < length; i++)
        printf("%c", number[i]);
    printf("%c\n", number[i]);
}