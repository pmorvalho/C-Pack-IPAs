
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){
    int N, count;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        if(N % i == 0){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}