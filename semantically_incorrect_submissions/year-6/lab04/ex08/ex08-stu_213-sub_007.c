
#include <stdio.h>

#define MAX 100
int main() {
    char num1[MAX], num2[MAX];
    int i;
    scanf("%s", num1);
    scanf("%s", num2);
    for (i = 0; num1[i] != '\0'; i++)    
        if (num1[i] >= num2[i])
            printf("%s", num1);
        else
            printf("%s", num2);
    return 0;
}