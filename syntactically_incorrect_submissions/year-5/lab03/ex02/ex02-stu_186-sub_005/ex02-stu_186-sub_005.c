
#include <stdio.h>

void piramide(int N) {

    for(int i = 1; i <= N; i++) {        
       
        for(int j = 0; j < N-i; j++) {
            printf(" ");
        }

        for(int n = 1; n <= i; n++) {
            printf("%d", n);
        }

        for(int n = i-1; n >= 1; n-- ) {
            printf("%d", n);
        }

        printf("\n");
    }

}


int main() {
    int N;
    
    scanf("%d", &N);
    
    if (N >= 2) {
        piramide(N);
    }
    
    return 0;
}