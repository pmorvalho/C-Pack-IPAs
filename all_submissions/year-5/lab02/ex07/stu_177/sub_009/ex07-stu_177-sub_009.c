
#include <stdio.h>

int main(){
    int n, num, i;
    scanf("%d", &n);
    num = 2;  
    for(i = n-1; i > 1; i--){
        if(n%i == 0)
            num++;
    }
    printf("%d\n", num);
    return 0;
}