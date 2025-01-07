
#include <stdio.h>

int main(){
    int N;
    int s;
    int temp;
    int counter = 0;
    scanf("%d", &N);

    while(N != 0){
        counter++;
        temp = N%10;
        s += temp; 
        N = N/10;
    }

    printf("%d\n%d\n", counter, s);
    return 0;
    
}