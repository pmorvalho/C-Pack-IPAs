

#include <stdio.h>

int main() {

    int num, num_divisores = 0, i;

    scanf("%d", &num);

    for(i = 1; i < num+1; i++) {
        if ((num % i) == 0) {
            num_divisores++;
        }
    }
    
    printf("%d\n", num_divisores);

    return 0;
}
