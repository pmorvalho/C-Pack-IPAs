
#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    for(int counter = 1; counter <= N; counter++){
        printf("%d\n", &counter);
    }

    return 0;
}