
#include <stdio.h>

int main() {
    int n;
    int dig = 0, sum = 0, temp = 0;
    scanf("%d", &n);

    while(n != 0){
        temp = n % 10;
        dig++;
        sum += temp;
        n = n / 10;
    }

    printf("%d\n%d\n", dig, sum);
    return 0;
}