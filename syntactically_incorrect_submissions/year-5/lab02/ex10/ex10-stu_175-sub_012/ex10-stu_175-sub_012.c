
#include <stdio.h>

int main (){
    int num = 0, sum = 0, dig = 0;
    scanf("%d", &num);
    for(num; num>0; dig++){
        sum += num%10;
        num /= 10;
    }
    printf("%d\n%d\n", dig, sum);
    return 0;
}