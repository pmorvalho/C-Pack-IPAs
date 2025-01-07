
#include <stdio.h>
int num1;
int num2;

int main() {
    scanf("%d %d", &num1, &num2);
    if (num1 % num2 == 0) 
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}