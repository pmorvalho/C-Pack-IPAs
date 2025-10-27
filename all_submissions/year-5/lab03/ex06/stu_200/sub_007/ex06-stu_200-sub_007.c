
#include <stdio.h>

int main(){
    char a;
    int sum = 0;
    while ((a = getchar()) != EOF)
        sum = sum + a - '0';
    if (sum % 9 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}