
#include <stdio.h>

int main(){
    int N;
    int div = 0;
    scanf("%d", &N);
    int counter = N;

    while(counter>0){
        if(N % counter == 0){
            div++;
        }
        counter--;
    }

    printf("%d\n", div);
    return 0;
}