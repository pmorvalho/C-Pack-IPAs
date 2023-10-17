
#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 >= num3) {
        if (num1 >= num2) printf("%d\n", num1);
        else printf("%d\n", num1);
    }
    else {
        if (num3 >= num2) printf("%d\n", num3);
        else printf("%d\n", num2);
    }
    return 0;
}