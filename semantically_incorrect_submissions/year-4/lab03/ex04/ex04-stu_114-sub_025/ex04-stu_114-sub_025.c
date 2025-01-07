#include <stdio.h>

int main() {
    int N, inverso = 0, inversoagain = 0; 

    while (scanf("%d", &N) == 1) {

        if (N == 0) {
            inversoagain = 0;
        
        } else {
            while (N != 0) {
                inverso = inverso * 10 + (N % 10);
                N /= 10;
            }

            while (inverso % 10 == 0) {
                inverso /= 10;
            }

            while (inverso != 0) {

                inversoagain = inversoagain * 10 + (inverso % 10);
                inverso /= 10;
            }
        }

        printf("%d ", inversoagain);

        inverso = 0;
        inversoagain = 0;
    }

    return 0;
}
