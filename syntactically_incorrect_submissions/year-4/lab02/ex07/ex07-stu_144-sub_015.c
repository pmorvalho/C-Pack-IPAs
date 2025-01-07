
#include <stdio.h>

int main(){
    int N;
    int div;
    scanf("%d", &N);
    for(int counter = 0; counter <= N; counter++){
        if(N % counter == 0){
            div = counter;
            printf("%d\n", div);
        }
    }
    return 0;
}