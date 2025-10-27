
#include <stdio.h>

int main(){
    int n, counter=0, total=0;

    scanf("%d", &n);
    
    while (n>0){
        counter++;
        total += n % 10;
        n /= 10;
    }
    printf("%d\n%d\n", counter, total);
    
    return 0;
}