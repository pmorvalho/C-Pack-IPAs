
#include <stdio.h>

int main(){
    int N, i, counter;
    counter = 0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        counter = N % i != 0 ? counter : counter + 1;
    }
    printf("%d\n", counter);
    return 0;
}