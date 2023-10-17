
#include <stdio.h>

int main () {
    int num, dig = 0, sum = 0;
    scanf("%d", &num);
    while (num != 0){
        sum += num%10;
        dig++;
        num = num/10;
    }
    printf("%d\n%d\n",dig,sum);
    return 0;
}