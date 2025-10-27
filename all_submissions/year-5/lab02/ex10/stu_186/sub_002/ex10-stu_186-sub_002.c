
#include <stdio.h>
int main() {
    int num, sum = 0, len = 0; 

    scanf("%d", &num);

    if (num > 0) { 
        while(num > 0) {
            sum += num % 10;
            
            num /= 10; 
            
            len++;
        }
    }
    printf("%d\n%d\n", len, sum);

    return 0;
}