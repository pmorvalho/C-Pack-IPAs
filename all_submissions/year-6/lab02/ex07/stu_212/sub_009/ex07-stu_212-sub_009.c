
#include <stdio.h>
int main() {
    int counter = 0;
    int num;
    scanf("%d", &num);
    int div = 1;
    while (div <= num) {
        if (num % div == 0)
            counter += 1;
            div += 1;
    }
    printf("%d\n", counter);
}