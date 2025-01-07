
#include <stdio.h>

int main() {
    
    int N;
    int i = 1;
    int count = 0;

    
    scanf("%d", &N);

    
    for (; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }

   
    printf("%d\n", count);

    return 0;
}