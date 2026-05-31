
#include <stdio.h>

int main(){
    int n, i, temp, temp1, temp2;
    scanf("%d", &n);
    i = 1;
    temp = n;
    temp1 = temp2 = 0;
    while(temp > 1){
        temp /= 10;
        i++;
    }
    while(n >= 1){
        temp1 = n % 10;
        n /= 10;
        temp2 += temp1;
    }
    printf("%d\n%d\n", i, temp2);
    return 0;   
}