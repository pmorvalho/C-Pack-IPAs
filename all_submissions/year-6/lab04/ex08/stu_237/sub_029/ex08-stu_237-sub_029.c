
#include <stdio.h>

int main() {
    long long num1, num2;
    
    scanf("%lld", &num1);
    scanf("%lld", &num2);

    if (num1 > num2) {
        printf("%lld", num1);
    }
    else {
        printf("%lld", num2);
    }

    return 0;
}